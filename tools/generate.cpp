#include "var.hpp"
#include <iomanip>

enum
{
    OPERATOR_PLUS = 0,
    OPERATOR_PLUS_EQUALS,
    OPERATOR_MINUS,
    OPERATOR_MINUS_EQUALS,
    OPERATOR_DIV,
    OPERATOR_DIV_EQUALS,
    OPERATOR_BOOL,
    // add new operator here

    // end marker
    OPERATOR_ENUM_LENGTH
};

enum output_t
{
    OUTPUT_MARKDOWN,
    OUTPUT_GTEST
};

void setupTestData(var &testData)
{
    const var &testNumbers = array(0, 1, -1, NAN, INFINITY, -INFINITY, 1.234, -100);
    const var &testStrings = array("", "hello", u"\u1234");
    const var &testArrays = array(array(), array(1, "hello"), array(1, 2));
    const var &testBools = array(true, false);
    const var &testObjects = array(var(), json::parse(uR"({"a":1})"), json::parse(uR"({"a":2,"b":3})"), null(), undefined());

    testData = array(testNumbers, testStrings, testArrays, testBools, testObjects);
}

bool isSingleOperator(int op)
{
    return op == OPERATOR_BOOL;
}

var getExpectedType(int op)
{
    return op == OPERATOR_BOOL ? "bool" : "var";
}

var getTypeName(vartype t)
{
    switch (t)
    {
    case STRING:
        return "STRING";
    case NUMBER:
        return "NUMBER";
    case OBJECT:
        return "OBJECT";
    case UNDEFINED:
        return "UNDEFINED";
    case ARRAY:
        return "ARRAY";
    case BOOLEAN:
        return "BOOLEAN";

    default:
        throw std::runtime_error("Unknown type.");
    }
}

var getOpName(int op)
{
    switch (op)
    {
    case OPERATOR_PLUS:
        return "_PLUS_";
    case OPERATOR_PLUS_EQUALS:
        return "_PLUS_EQUALS_";
    case OPERATOR_MINUS:
        return "_MINUS_";
    case OPERATOR_MINUS_EQUALS:
        return "_MINUS_EQUALS_";
    case OPERATOR_DIV:
        return "_DIV_";
    case OPERATOR_DIV_EQUALS:
        return "_DIV_EQUALS_";
    case OPERATOR_BOOL:
        return "_BOOL_";
    default:
        throw std::runtime_error("Unexpected operation in test.");
    }
}

void generateMarkdown(const var &val1, const int op, const var &val2, const var &result, const std::string &exception, const bool singleOp, const var &testName)
{
    static bool first = true;
    if (first)
    {
        std::cout << "| a           | operator | b                     | result                                 | result type | Test name |" << std::endl;
        std::cout << "| ----------- | -------- | --------------------- | -------------------------------------- | ----------- | --------- |" << std::endl;

        first = false;
    }

    std::cout << "|" << std::setw(14) << val1.toJSON() << " |";

    switch (op)
    {
    case OPERATOR_PLUS:
        std::cout << " + ";
        break;
    case OPERATOR_PLUS_EQUALS:
        std::cout << " += ";
        break;
    case OPERATOR_MINUS:
        std::cout << " - ";
        break;
    case OPERATOR_MINUS_EQUALS:
        std::cout << " -= ";
        break;
    case OPERATOR_DIV:
        std::cout << " / ";
        break;
    case OPERATOR_DIV_EQUALS:
        std::cout << " /= ";
        break;
    case OPERATOR_BOOL:
        std::cout << " (bool) ";
        break;
    default:
        throw std::runtime_error("Unexpected operation in test.");
    }

    std::cout << "|" << std::setw(14) << (singleOp ? "" : val2.toJSON());

    std::cout << " |";

    if (exception.length() == 0)
    {
        std::cout << std::setw(14) << result.toJSON();
    }
    else
    {
        std::cout << std::setw(14) << "exception: " << exception;
    }

    var expectedType = getExpectedType(op);
    if (expectedType == "var")
    {
        expectedType += " (";
        expectedType += getTypeName(result.getType());
        expectedType += ")";
    }

    std::cout << " | " << expectedType << " | " << testName << " |" << std::endl;
}

var generateOperatorResult(int op)
{
    switch (op)
    {
    case OPERATOR_PLUS:
        return "var result = val1 + val2;";
    case OPERATOR_PLUS_EQUALS:
        return "var result = val1 += val2;";
    case OPERATOR_MINUS:
        return "var result = val1 - val2;";
    case OPERATOR_MINUS_EQUALS:
        return "var result = val1 -= val2;";
    case OPERATOR_DIV:
        return "var result = val1 / val2;";
    case OPERATOR_DIV_EQUALS:
        return "var result = val1 /= val2;";
    case OPERATOR_BOOL:
        return "bool result = (bool)val1;";
    default:
        throw std::runtime_error("Unexpected operation in test.");
    }
}

void generateGTest(const var &val1, const int op, const var &val2, const var &result, const std::string &exception, const var &testName, const bool singleOp)
{
    static bool first = true;
    if (first)
    {
        std::string header = R"(
#include <gtest/gtest.h>
#include "var.hpp"
#include <iostream>
#include <cuchar>
#include <fstream>
#include <glob.h>
#include <iomanip>

)";
        std::cout << header << std::endl;

        first = false;
    }

    std::cout << "TEST(GeneratedOperatorTests, " << testName << ")" << std::endl;
    std::cout << "{" << std::endl;
    std::cout << "  var val1 = " << val1.toCode() << ";" << std::endl;
    if (!singleOp)
    {
        std::cout << "  var val2 = " << val2.toCode() << ";" << std::endl;
    }
    if (exception.length() > 0)
    {
        std::cout << "  EXPECT_THROW(" << generateOperatorResult(op) << ", std::runtime_error);" << std::endl;
    }
    else
    {
        std::cout << "  " << getExpectedType(op) << " expected = " << result.toCode() << ";" << std::endl;
        std::cout << "  " << generateOperatorResult(op) << std::endl;

        bool varTypeExpected = getExpectedType(op) == "var";
        if (varTypeExpected)
        {
            std::cout << "  EXPECT_EQ(" << getTypeName(result.getType()) << ", result.getType());" << std::endl;
        }

        if (varTypeExpected && isNaN(result))
        {
            std::cout << "  EXPECT_TRUE(isNaN(result));" << std::endl;
        }
        else if (varTypeExpected && (result.getType() == ARRAY || result.getType() == NUMBER || result.getType() == OBJECT))
        {
            std::cout << "  EXPECT_EQ(expected.toJSON(), result.toJSON());" << std::endl;
        }
        else
        {
            std::cout << "  EXPECT_EQ(expected, result);" << std::endl;
        }
    }

    std::cout << "}" << std::endl
              << std::endl;
}

void performOperation(var &result, var &val1, const var &val2, int op, std::string &exception)
{
    try
    {
        switch (op)
        {
        case OPERATOR_PLUS:
            result = val1 + val2;
            break;
        case OPERATOR_PLUS_EQUALS:
            result = val1 += val2;
            break;
        case OPERATOR_MINUS:
            result = val1 - val2;
            break;
        case OPERATOR_MINUS_EQUALS:
            val1 -= val2;
            result = val1;
            break;
        case OPERATOR_DIV:
            result = val1 / val2;
            break;
        case OPERATOR_DIV_EQUALS:
            result = val1 /= val2;
            break;
        case OPERATOR_BOOL:
            result = (bool)val1;
            break;
        default:
            throw std::runtime_error("Unexpected operation in test.");
        }
    }
    catch (std::runtime_error &e)
    {
        exception = std::string(e.what());
    }
    catch (...)
    {
        exception = "<unknown>";
    }
}

output_t parseArgs(int argc, char **argv)
{
    var args = array();

    for (int i = 1; i < argc; i++)
    {
        args += argv[i];
    }
    if (args / array("markdown"))
    {
        return OUTPUT_MARKDOWN;
    }
    else if (args / array("gtest"))
    {
        return OUTPUT_GTEST;
    }
    else
    {
        std::cerr << "Unknown args: " << args << std::endl;
        std::cerr << "Usage: " << std::endl;
        std::cerr << "  " << argv[0] << " [markdown|gtest]" << std::endl;

        exit(1);
    }
}

int main(int argc, char **argv)
{
    output_t out = parseArgs(argc, argv);

    var testData;
    setupTestData(testData);
    for (int op = 0; op < OPERATOR_ENUM_LENGTH; op++)
    {
        bool singleOp = isSingleOperator(op);
        for (var t = 0; t < testData.length(); t++)
        {
            for (var i1 = 0; i1 < testData[t].length(); i1++)
            {
                for (var o = 0; o < (singleOp ? 1 : testData.length()); o++)
                {
                    for (var i2 = 0; i2 < (singleOp ? 1 : testData[o].length()); i2++)
                    {
                        var val1 = testData[t][i1];
                        const var &val2 = singleOp ? "" : testData[o][i2];

                        var result;
                        std::string exception = "";
                        const var &testId = t.toString() + "_" + i1.toString() + "_" + o.toString() + "_" + i2.toString();
                        const var &type1 = getTypeName(val1.getType());
                        const var &type2 = getTypeName(val2.getType());
                        const var &opname = getOpName(op);

                        const var &testName = type1 + opname + (singleOp ? "" : type2 + "_") + testId;

                        performOperation(result, val1, val2, op, exception);

                        // recreate testdata
                        setupTestData(testData);
                        val1 = testData[t][i1];
                        // val2 = ;

                        switch (out)
                        {
                        case OUTPUT_MARKDOWN:
                            generateMarkdown(val1, op, singleOp ? "" : testData[o][i2], result, exception, singleOp, testName);
                            break;
                        case OUTPUT_GTEST:
                            generateGTest(val1, op, singleOp ? "" : testData[o][i2], result, exception, testName, singleOp);
                            break;

                        default:
                            throw std::runtime_error("Unknwon output type.");
                            break;
                        }
                    }
                }
            }
        }
    }
}
