#include <gtest/gtest.h>
#include "var.hpp"
#include <iostream>
#include <fstream>

std::string readFileIntoString(const std::string &path)
{
    std::ifstream input_file(path, std::ios::binary);
    input_file.imbue(std::locale(input_file.getloc(), new std::codecvt_utf8<wchar_t>));
    if (!input_file.is_open())
    {
        std::cerr << "Could not open the file - '"
                  << path << "'" << std::endl;
        throw std::runtime_error("could not open test file");
    }
    std::ostringstream ostrm;
    ostrm << input_file.rdbuf();
    return ostrm.str();
}

TEST(DynamicV, BasicString)
{
    var str = "welt";
    EXPECT_EQ(str, "welt");
}

TEST(DynamicV, BasicNumber)
{
    var num = 1;
    EXPECT_EQ(num, 1);
}

TEST(DynamicV, BasicObject)
{
    var obj;
    obj["name"] = "Basic Object";
    EXPECT_EQ(obj.toString(), "[object]");
    EXPECT_EQ(obj.toJSON(), "{\"name\":\"Basic Object\"}");
}

TEST(DynamicV, NumberAddition)
{
    var num1 = 1;
    var num2 = 3.1;
    var num3 = num1 + num2;
    EXPECT_EQ(num3, 4.1);
}

TEST(DynamicV, StringConcatenation)
{
    var str1 = "Hello";
    var str2 = "World";
    var result = str1 + " " + str2;
    EXPECT_EQ(result, "Hello World");
}

TEST(DynamicV, StringAndUndefinedConcatenation)
{
    var result = "Hello " + undefined();
    EXPECT_EQ(result, "Hello undefined");
}

TEST(DynamicV, NumberAndUndefinedConcatenation)
{
    var result = 1.1 + undefined();
    EXPECT_EQ(result, "1.1undefined");
}

TEST(DynamicV, ObjecttoJSONUndefinedProp)
{
    var result;
    result["test"] = undefined();
    EXPECT_EQ(result.toJSON(), "{}");
}

TEST(DynamicV, ObjecttoJSONNumberProp)
{
    var result;
    result["test"] = 1.234;
    EXPECT_EQ(result.toJSON(), "{\"test\":1.234}");
}

TEST(DynamicV, ObjecttoJSONStringProp)
{
    var result;
    result["test"] = "test1234";
    EXPECT_EQ(result.toJSON(), "{\"test\":\"test1234\"}");
}

TEST(DynamicV, ObjecttoJSONObjectProp)
{
    var result;
    var obj;
    obj["prop"] = "val";
    result["obj"] = obj;
    EXPECT_EQ(result.toJSON(), "{\"obj\":{\"prop\":\"val\"}}");
}

TEST(DynamicV, StringtoJSON)
{
    var result = "test";
    EXPECT_EQ(result.toJSON(), "\"test\"");
}

TEST(DynamicV, StdStringtoJSON)
{
    var result = std::string("test");
    EXPECT_EQ(result.toJSON(), "\"test\"");
}

TEST(DynamicV, NumbertoJSON)
{
    var result = 1.234;
    EXPECT_EQ(result.toJSON(), "1.234");
}

TEST(DynamicV, getUndefined)
{
    var result;
    EXPECT_EQ(result["nonexistent"], undefined());
}

TEST(DynamicV, getString)
{
    var result;
    result["prop"] = "val";
    EXPECT_EQ(result["prop"], "val");
}

TEST(DynamicV, getNumber)
{
    var result;
    result["prop"] = 1;
    EXPECT_EQ(result["prop"], 1);
}

TEST(DynamicV, getObj)
{
    var result;
    var obj;
    result["prop"] = obj;
    EXPECT_EQ(result["prop"], obj);
}

TEST(DynamicV, numberEqualsNumber)
{
    var val1 = 1;
    var val2 = 1;
    EXPECT_TRUE(val1 == val2);
}

TEST(DynamicV, stringEqualsstring)
{
    var val1 = "a";
    var val2 = "a";
    EXPECT_TRUE(val1 == val2);
}

TEST(DynamicV, objEqualsobj)
{
    var obj;
    var obj2 = obj;
    EXPECT_TRUE(obj == obj2);
}

TEST(DynamicV, numberNotEqualsNumber)
{
    var val1 = 1;
    var val2 = 2;
    EXPECT_FALSE(val1 == val2);
}

TEST(DynamicV, stringNotEqualsstring)
{
    var val1 = "a";
    var val2 = "b";
    EXPECT_FALSE(val1 == val2);
}

TEST(DynamicV, objNotEqualsobj)
{
    var obj;
    var obj2;
    EXPECT_FALSE(obj == obj2);
}

TEST(DynamicV, objOverride)
{
    var obj;
    obj["test"] = 123;
    obj["test"] = 321;
    EXPECT_EQ(obj["test"], 321);
}

TEST(DynamicV, objDeepValue)
{
    var obj1;
    var obj2;
    var obj3;

    obj3["prop"] = "val";
    obj2["obj3"] = obj3;
    obj1["obj2"] = obj2;

    EXPECT_EQ(obj1["obj2"]["obj3"]["prop"], "val");
}

TEST(DynamicV, expectRuntimeError)
{
    var obj = 1;
    EXPECT_THROW(obj["test"], std::runtime_error);
}

// array
TEST(DynamicV, array)
{
    var arr[] = {3, 2, 1};
    EXPECT_EQ(arr[0], 3);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 1);
}

TEST(DynamicV, arrayToString)
{
    var arr = array(3, 2, 1);
    EXPECT_EQ(arr.toString(), "[3,2,1]");
}

TEST(DynamicV, arrayConcatenation)
{
    var arr = array(3, 2, 1) + array(4, 5, 6);
    EXPECT_EQ(arr.toString(), "[3,2,1,4,5,6]");
}

TEST(DynamicV, arrayAndValueConcatenation)
{
    var original = array(3, 2, 1);
    var arr = original + "test";
    EXPECT_EQ(arr.toString(), "[3,2,1,test]");
    EXPECT_EQ(original.length(), 3);
}

TEST(DynamicV, valueAndArrayConcatenation)
{
    var arr = "test" + array(3, 2, 1);
    EXPECT_EQ(arr.toString(), "test[3,2,1]");
}

TEST(DynamicV, u16StringConcatenation)
{
    var arr = u"test" + var();
    EXPECT_EQ(arr.toString(), "test[object]");
}

TEST(DynamicV, emptyArray)
{
    var arr = array();
    EXPECT_EQ(arr.toString(), "[]");
}

TEST(DynamicV, emptyArrayVariation2)
{
    var arr(vartype::ARRAY);
    EXPECT_EQ(arr.toString(), "[]");
}

TEST(DynamicV, arrayExtension)
{
    var arr = array() + 1 + 2 + 3;
    EXPECT_EQ(arr.toString(), "[1,2,3]");
}

TEST(DynamicV, arrayEquals)
{
    var arr1 = array(1, 2, 3);
    var arr2 = array(1, 2, 3);
    EXPECT_TRUE(arr1 != arr2);
}

TEST(DynamicV, arrayNotEquals1)
{
    var arr1 = array(1, 2, 3);
    var arr2 = array(1, 2);
    EXPECT_FALSE(arr1 == arr2);
}

TEST(DynamicV, arrayNotEquals2)
{
    var arr1 = array(1, 2, 3);
    var arr2 = array(1, 2, 4);
    EXPECT_FALSE(arr1 == arr2);
}

TEST(DynamicV, arrayGet)
{
    var arr1 = array(1, 2, 3);
    EXPECT_EQ(arr1.get(1), 2);
}

TEST(DynamicV, arrayOperatorIdx)
{
    var arr1 = array(1, 2, 3);
    EXPECT_EQ(arr1[1], 2);
}

TEST(DynamicV, arrayOperatorIdxModify)
{
    var arr = array(1, 2, 3);
    arr[1] = "test";
    EXPECT_EQ(arr[1], "test");
    EXPECT_EQ(arr.toString(), "[1,test,3]");
}

TEST(DynamicV, arrayOperatorIdxModifyUndefined)
{
    var arr = array(1, 2, 3);
    arr[1] = undefined();
    EXPECT_TRUE(arr[1] == undefined());
    EXPECT_EQ(arr.toString(), "[1,undefined,3]");
}

TEST(DynamicV, arrayForLoop)
{
    var arr = array(1, 2, 3);
    int i = 0;
    for (var v : arr)
    {
        EXPECT_EQ(v, i + 1);
        i++;
    }
}

TEST(DynamicV, arrayForLoopAlternative)
{
    var arr = array(1, 2, 3);
    for (var i = 0; i < arr.length(); i++)
    {
        EXPECT_EQ(arr[i], i + 1);
    }
}

TEST(DynamicV, arrayForLoopAlternative2)
{
    var arr = array(1, 2, 3);
    for (var i = arr.length() - 1; i >= 0; i--)
    {
        EXPECT_EQ(arr[i], i + 1);
    }
}

TEST(DynamicV, arraySelfReferencing)
{
    var ws = array("");
    ws += array(ws);
    EXPECT_EQ(ws[1][1][1][1][1].length(), 2);
}

TEST(DynamicV, booleanTrue)
{
    var v = true;
    EXPECT_TRUE(!!v);
}

TEST(DynamicV, booleanFalse)
{
    var v = false;
    EXPECT_FALSE(v);
}

TEST(DynamicV, objectKeysArray)
{
    var obj;
    obj["a"] = 1;
    obj["b"] = 2;

    int i = 0;
    for (var key : obj.keys())
    {
        if (i == 0)
        {
            EXPECT_EQ(key, "a");
        }
        else if (i == 1)
        {
            EXPECT_EQ(key, "b");
        }
        else
        {
            throw std::runtime_error("should not be here");
        }
        i++;
    }
}

TEST(DynamicV, arrayWithVarIdx)
{
    var arr = array("test");
    var idx = 0;
    EXPECT_EQ(arr[idx], "test");
}

TEST(DynamicV, arrayOutOfBounds)
{
    var arr = array("test");
    var idx = 2;
    EXPECT_THROW(arr[idx], std::out_of_range);
}

TEST(DynamicV, fibonacci)
{
    var arr = array(1, 1);
    for (var i = 0; i < 10; i++)
    {
        arr = arr + (arr[i] + arr[i + 1]);
    }
    EXPECT_EQ(arr.toString(), "[1,1,2,3,5,8,13,21,34,55,89,144]");
}

TEST(DynamicV, lengthUndefined)
{
    EXPECT_EQ(undefined().length(), 0);
}

TEST(DynamicV, lengthNumber)
{
    EXPECT_EQ(var(3.123).length(), 3.123);
}

TEST(DynamicV, lengthStringEmpty)
{
    EXPECT_EQ(var("").length(), 0);
}

TEST(DynamicV, lengthString)
{
    EXPECT_EQ(var("test").length(), 4);
}

TEST(DynamicV, lengthObjectEmpty)
{
    EXPECT_EQ(var().length(), 0);
}

TEST(DynamicV, lengthDontClearManualUndefined)
{
    var obj;
    obj["a"] = 1;
    obj["b"] = 2;
    obj["c"] = undefined();
    obj["d"] = 3;
    EXPECT_EQ(obj.length(), 4);
}

TEST(DynamicV, lengthClearAutoUndefined)
{
    var obj;
    var a = obj["a"];
    var b = obj["b"];
    var c = obj["c"];
    EXPECT_EQ(obj.length(), 0);
}

TEST(DynamicV, parseJSONSimple1)
{
    var d = "{}";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 0);
}

TEST(DynamicV, parseJSONSimple2)
{
    var d = R"({"aa":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj["aa"].getType(), OBJECT);
    EXPECT_EQ(obj["aa"].keys().length(), 0);
}

TEST(DynamicV, parseJSONSimple3)
{
    var d = R"({"_":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj["_"].getType(), OBJECT);
    EXPECT_EQ(obj["_"].keys().length(), 0);
}

TEST(DynamicV, parseJSONMulti)
{
    var d = R"({"a":{},"b":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 2);
    EXPECT_EQ(obj["a"].getType(), OBJECT);
    EXPECT_EQ(obj["a"].keys().length(), 0);
    EXPECT_EQ(obj["b"].getType(), OBJECT);
    EXPECT_EQ(obj["b"].keys().length(), 0);
}

TEST(DynamicV, parseJSONDeep1)
{
    var d = R"({"deep":{"deep":{}}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj["deep"].getType(), OBJECT);
    EXPECT_EQ(obj["deep"].keys().length(), 1);
    EXPECT_EQ(obj["deep"]["deep"].getType(), OBJECT);
    EXPECT_EQ(obj["deep"]["deep"].keys().length(), 0);
}

TEST(DynamicV, parseJSONValidEscapeSeqInKey)
{
    var d = R"({"hel\nlo":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj["hel\nlo"].getType(), OBJECT);
    EXPECT_EQ(obj["hel\nlo"].keys().length(), 0);
}

TEST(DynamicV, parseJSONInvalidEscapeSeqInKey)
{
    var d = R"({"hel\elo":{}})";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONValidEscapeSeqHex1)
{
    var d = R"({"\uAF01":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj[u"\uAF01"].getType(), OBJECT);
    EXPECT_EQ(obj[u"\uAF01"].keys().length(), 0);
}

TEST(DynamicV, parseJSONValidEscapeSeqHex2)
{
    var d = R"({"\uAf01":{}})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.keys().length(), 1);
    EXPECT_EQ(obj[u"\uAf01"].getType(), OBJECT);
    EXPECT_EQ(obj[u"\uAf01"].keys().length(), 0);
}

TEST(DynamicV, parseJSONInvalidEscapeSeqHex)
{
    var d = R"({"\uAAAU":{}})";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONTrue)
{
    var d = R"({"a":true})";
    var obj = json::parse(d);
    EXPECT_EQ(obj["a"], true);

    var test = 0;
    if (obj["a"])
    {
        test = 1;
    }
    EXPECT_EQ(test, 1);
}

TEST(DynamicV, parseJSONFalse)
{
    var d = R"({"a":false})";
    var obj = json::parse(d);
    EXPECT_EQ(obj["a"], false);

    var test = 0;
    if (obj["a"])
    {
        test = 1;
    }
    EXPECT_EQ(test, 0);
}

TEST(DynamicV, parseJSONNull)
{
    var d = R"({"a":null})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["a"].getType(), OBJECT);
    EXPECT_EQ(obj["a"], null());
}

TEST(DynamicV, parseJSONArrayEmpty1)
{
    var d = R"({"a":[]})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["a"].getType(), ARRAY);
    EXPECT_EQ(obj["a"].length(), 0);
}

TEST(DynamicV, parseJSONArrayEmpty2)
{
    var d = "[ ]";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), ARRAY);
    EXPECT_EQ(obj.length(), 0);
}

TEST(DynamicV, parseJSONArraySimple1)
{
    var d = "[{},{}]";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), ARRAY);
    EXPECT_EQ(obj.length(), 2);
    EXPECT_EQ(obj[0].getType(), OBJECT);
    EXPECT_EQ(obj[1].getType(), OBJECT);
}

TEST(DynamicV, parseJSONArraySimple2)
{
    var d = "[{},{}  ,{}  ,{  }]";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), ARRAY);
    EXPECT_EQ(obj.length(), 4);
    EXPECT_EQ(obj[0].getType(), OBJECT);
    EXPECT_EQ(obj[1].getType(), OBJECT);
    EXPECT_EQ(obj[2].getType(), OBJECT);
    EXPECT_EQ(obj[3].getType(), OBJECT);
}

TEST(DynamicV, parseJSONStringSimple1)
{
    var d = R"("hello")";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), STRING);
    EXPECT_EQ(obj, "hello");
}

TEST(DynamicV, parseJSONStringSimple2)
{
    var d = R"({ "a" : "hello" })";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["a"].getType(), STRING);
    EXPECT_EQ(obj["a"], "hello");
}

TEST(DynamicV, parseJSONString)
{
    var d = R"({ "a" : ["hello","2"] , "b" : ["hello","4"]  })";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["a"].getType(), ARRAY);
    EXPECT_EQ(obj["a"].length(), 2);
    EXPECT_EQ(obj["a"][0], "hello");
    EXPECT_EQ(obj["a"][1], "2");
    EXPECT_EQ(obj["b"].getType(), ARRAY);
    EXPECT_EQ(obj["b"].length(), 2);
    EXPECT_EQ(obj["b"][0], "hello");
    EXPECT_EQ(obj["b"][1], "4");
}

TEST(DynamicV, parseJSONNumberSimple)
{
    var d = "1";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), NUMBER);
    EXPECT_EQ(obj, 1);
}

TEST(DynamicV, parseJSONNumberFraction)
{
    var d = "1.123";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), NUMBER);
    EXPECT_EQ(obj, 1.123);
}

TEST(DynamicV, parseJSONNumberFractionExponent)
{
    var d = R"({"abc":1.123,"cde":83.7E2})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["abc"].getType(), NUMBER);
    EXPECT_EQ(obj["abc"], 1.123);
    EXPECT_EQ(obj["cde"].getType(), NUMBER);
    EXPECT_EQ(obj["cde"], 83.7E2);
}

TEST(DynamicV, parseJSONInvalidTrailingCharacters)
{
    var d = "{}  abc";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONInvalidUnterminatedString)
{
    var d = R"({\"key)";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONInvalidTrailingComma)
{
    var d = R"({"key":1,})";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONInvalidTrailingFractionPoint)
{
    var d = R"({"key":1.})";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONCornerCaseEmptyKey)
{
    var d = R"({"":1})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj[""].getType(), NUMBER);
    EXPECT_EQ(obj[""], 1);
}

TEST(DynamicV, parseJSONInvalidMissingValue)
{
    var d = R"({"":})";
    EXPECT_THROW(json::parse(d), std::runtime_error);
}

TEST(DynamicV, parseJSONLongFractionalNumber)
{
    var d = "0.00000000000000000001";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), NUMBER);
    var n = obj.toString();
    EXPECT_EQ(n, "1e-20");
}

TEST(DynamicV, parseJSONLongIntegerNumber)
{
    var d = "10000000000000000999";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), NUMBER);
    var n = obj.toString();
    EXPECT_EQ(n, "1e+19");
}

TEST(DynamicV, parseJSONNumber1)
{
    var d = R"(10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000E-800)";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), NUMBER);
    var n = obj.toString();
    EXPECT_EQ(n, "inf");
}

TEST(DynamicV, parseJSONDuplicateKeySignedZero)
{
    var d = R"({"a":0,"a":-0})";
    var obj = json::parse(d);
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj.toJSON(), "{\"a\":-0}");
}

TEST(DynamicV, parseJSONAsInit)
{
    var obj = json::parse(R"({"a":1})");
    EXPECT_EQ(obj.getType(), OBJECT);
    EXPECT_EQ(obj["a"].getType(), NUMBER);
    EXPECT_EQ(obj["a"], 1);
}

TEST(DynamicV, parseJSONUnicodeEscaping)
{
    var d = "\"\\u1234\\u4321\\\"\\\\\\/\\b\\f\\n\\r\\t\"";
    var obj = json::parse(d);

    EXPECT_EQ(obj.getType(), STRING);
    EXPECT_EQ(obj.length(), 10);
    EXPECT_EQ(obj.getU16String()[0], 0x1234);
    EXPECT_EQ(obj.getU16String()[1], 0x4321);
    EXPECT_EQ(obj.getU16String()[2], '"');
    EXPECT_EQ(obj.getU16String()[3], '\\');
    EXPECT_EQ(obj.getU16String()[4], '/');
    EXPECT_EQ(obj.getU16String()[5], '\b');
    EXPECT_EQ(obj.getU16String()[6], '\f');
    EXPECT_EQ(obj.getU16String()[7], '\n');
    EXPECT_EQ(obj.getU16String()[8], '\r');
    EXPECT_EQ(obj.getU16String()[9], '\t');
}

TEST(DynamicV, parseJSONUnicodeEscapingArray)
{
    var d = R"(["\u1234","\u4321","\"","\\","\/","\b","\f","\n","\r","\t"])";

    var obj = json::parse(d);

    EXPECT_EQ(obj.getType(), ARRAY);
    EXPECT_EQ(obj.length(), 10);

    EXPECT_EQ(obj[0].getType(), STRING);
    EXPECT_EQ(obj[0].length(), 1);
    EXPECT_EQ(obj[0], u"\u1234");

    EXPECT_EQ(obj[1].getType(), STRING);
    EXPECT_EQ(obj[1].length(), 1);
    EXPECT_EQ(obj[1], u"\u4321");

    EXPECT_EQ(obj[2].getType(), STRING);
    EXPECT_EQ(obj[2].length(), 1);
    EXPECT_EQ(obj[2], "\"");

    EXPECT_EQ(obj[3].getType(), STRING);
    EXPECT_EQ(obj[3].length(), 1);
    EXPECT_EQ(obj[3], "\\");

    EXPECT_EQ(obj[4].getType(), STRING);
    EXPECT_EQ(obj[4].length(), 1);
    EXPECT_EQ(obj[4], "/");

    EXPECT_EQ(obj[5].getType(), STRING);
    EXPECT_EQ(obj[5].length(), 1);
    EXPECT_EQ(obj[5], "\b");

    EXPECT_EQ(obj[6].getType(), STRING);
    EXPECT_EQ(obj[6].length(), 1);
    EXPECT_EQ(obj[6], "\f");

    EXPECT_EQ(obj[7].getType(), STRING);
    EXPECT_EQ(obj[7].length(), 1);
    EXPECT_EQ(obj[7], "\n");

    EXPECT_EQ(obj[8].getType(), STRING);
    EXPECT_EQ(obj[8].length(), 1);
    EXPECT_EQ(obj[8], "\r");

    EXPECT_EQ(obj[9].getType(), STRING);
    EXPECT_EQ(obj[9].length(), 1);
    EXPECT_EQ(obj[9], "\t");
}

TEST(DynamicV, toJSONTestObject1)
{
    var obj;
    EXPECT_EQ(obj.toJSON(), "{}");
}

TEST(DynamicV, toJSONTestObject2)
{
    std::u16string input = uR"({"a":{"b":{},"c":{}}})";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestObjectEscapeSeqInKey)
{
    std::u16string input = uR"({"a\"":{}})";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestObjectUTF8InKey)
{
    std::u16string input = u"{\"a\u1234\":{}}";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestObjectEscapedUTF8InKey)
{
    std::u16string input = u"{\"a\\u1234\":{}}";
    std::u16string expected = u"{\"a\u1234\":{}}";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), expected);
}

TEST(DynamicV, toJSONTestObjectEscapedZeroChar)
{
    std::u16string input = u"{\"a\\u0000\":{}}";
    std::u16string expected = u"{\"a\\u0000\":{}}";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), expected);
}

TEST(DynamicV, toJSONTestObjectEscaped0x0020CharExpectUnescaped)
{
    std::u16string input = u"{\"a\\u0020\":{}}";
    std::u16string expected = u"{\"a\u0020\":{}}";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), expected);
}

TEST(DynamicV, toJSONTestEscapingQuotes)
{
    std::u16string input = uR"("\"")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingBackslash)
{
    std::u16string input = uR"("\\")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingBackspace)
{
    std::u16string input = uR"("\b")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingForm)
{
    std::u16string input = uR"("\f")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingLF)
{
    std::u16string input = uR"("\n")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingCR)
{
    std::u16string input = uR"("\r")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestEscapingCustom)
{
    std::u16string input = uR"("\u0012")";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), input);
}

TEST(DynamicV, toJSONTestNoEscapingCustom)
{
    std::u16string input = uR"("\u1234")";
    std::u16string expected = u"\"\u1234\"";
    var obj = json::parse(input);
    EXPECT_EQ(obj.toJSON(), expected);
}

TEST(DynamicV, testOperatorPlusUndefined)
{
    var a = undefined();
    var b = undefined();
    var c = a + b;

    EXPECT_EQ(a, undefined());
    EXPECT_EQ(b, undefined());
    EXPECT_EQ(c, "undefinedundefined");
}

TEST(DynamicV, testOperatorPlusArrays)
{
    var a = array(1);
    var b = array(2);
    var c = a + b;

    EXPECT_EQ(a.toJSON(), array(1).toJSON());
    EXPECT_EQ(b.toJSON(), array(2).toJSON());
    EXPECT_EQ(c.toJSON(), array(1, 2).toJSON());
}

TEST(DynamicV, testOperatorPlusObjects)
{
    var a;
    a["k1"] = 123;
    a["k2"] = 456;
    a["k3"] = 789;

    var b;
    b["k2"] = 2;
    b["k4"] = 3;

    var c = a + b;

    EXPECT_EQ(a.keys().length(), 3);
    EXPECT_EQ(b.keys().length(), 2);
    EXPECT_EQ(c.keys().length(), 4);

    EXPECT_EQ(c["k1"], 123);
    EXPECT_EQ(c["k2"], 2);
    EXPECT_EQ(c["k3"], 789);
    EXPECT_EQ(c["k4"], 3);
}

TEST(DynamicV, testOperatorPlusEqObjects)
{
    var a;
    a["k1"] = 123;
    a["k2"] = 456;
    a["k3"] = 789;

    var b;
    b["k2"] = 2;
    b["k4"] = 3;

    var c = a;
    a += b;

    EXPECT_EQ(a.keys().length(), 4);
    EXPECT_EQ(c.keys().length(), 4);
    EXPECT_EQ(b.keys().length(), 2);

    EXPECT_EQ(a["k1"], 123);
    EXPECT_EQ(a["k2"], 2);
    EXPECT_EQ(a["k3"], 789);
    EXPECT_EQ(a["k4"], 3);
    EXPECT_EQ(c.toJSON(), a.toJSON());
}

TEST(DynamicV, testOperatorPlusEqArrayAndVar)
{
    var a = array(1, 2, 3);

    EXPECT_EQ(a.length(), 3);

    var c = a;
    a += 4;

    EXPECT_EQ(a.length(), 4);

    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(c.toJSON(), a.toJSON());
}

TEST(DynamicV, testOperatorPlusEqVarAndVarNumber)
{
    var a = 34;
    var b = 66;

    a += b;

    EXPECT_EQ(a, 100);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean1)
{
    var a = true;
    var b = true;

    a += b;

    EXPECT_EQ(a, true);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean2)
{
    var a = true;
    var b = false;

    a += b;

    EXPECT_EQ(a, true);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean3)
{
    var a = false;
    var b = true;

    a += b;

    EXPECT_EQ(a, true);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean4)
{
    var a = false;
    var b = false;

    a += b;

    EXPECT_EQ(a, false);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean5)
{
    var a = 1;
    var b = true;

    a += b;

    EXPECT_EQ(a, 2);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean6)
{
    var a = 1;
    var b = false;

    a += b;

    EXPECT_EQ(a, 1);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarBoolean7)
{
    var a = true;
    var b = -1;

    a += b;

    EXPECT_EQ(a.getType(), BOOLEAN);
    EXPECT_EQ(a, false);
}

TEST(DynamicV, testOperatorPlusEqVarAndVarString1)
{
    var a = "hello";
    var b = " world";

    a += b;

    EXPECT_EQ(a, "hello world");
}

TEST(DynamicV, testOperatorPlusEqVarAndVarString2)
{
    var a = "hello";
    var b;

    a += b;

    EXPECT_EQ(a, "hello[object]");
}

TEST(DynamicV, testOperatorDiffArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = array(2, 5, 7);

    var c = a - b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(b.length(), 3);
    EXPECT_EQ(c.length(), 4);

    std::string expected = "[1,3,4,6]";
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorDivIntersectionArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = array(2, 5, 7);

    var c = a / b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(b.length(), 3);
    EXPECT_EQ(c.length(), 2);

    std::string expected = "[2,5]";
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorDivEqIntersectionArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = array(2, 5, 7);

    var c = a;
    a /= b;

    EXPECT_EQ(a.length(), 2);
    EXPECT_EQ(c.length(), 2);
    EXPECT_EQ(b.length(), 3);

    std::string expected = "[2,5]";
    EXPECT_EQ(a.toJSON(), expected);
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorMinusDifferenceObject1)
{
    var a = json::parse(uR"({"a":1,"b":2,"c":3,"d":4})");
    var b = json::parse(uR"({"a":1,"c":5,"e":4})");

    var c = a - b;

    EXPECT_EQ(a.keys().length(), 4);
    EXPECT_EQ(b.keys().length(), 3);
    EXPECT_EQ(c.keys().length(), 2);

    std::u16string expected = uR"({"b":2,"d":4})";
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorDivIntersectionObject1)
{
    var a = json::parse(uR"({"a":1,"b":2,"c":3,"d":4})");
    var b = json::parse(uR"({"a":1,"c":5,"e":4})");

    var c = a / b;

    EXPECT_EQ(a.keys().length(), 4);
    EXPECT_EQ(b.keys().length(), 3);
    EXPECT_EQ(c.keys().length(), 2);

    std::u16string expected = uR"({"a":1,"c":3})";
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorDivEqIntersectionObject1)
{
    var a = json::parse(uR"({"a":1,"b":2,"c":3,"d":4})");
    var b = json::parse(uR"({"a":1,"c":5,"e":4})");

    var c = a;
    a /= b;

    EXPECT_EQ(a.keys().length(), 2);
    EXPECT_EQ(c.keys().length(), 2);
    EXPECT_EQ(b.keys().length(), 3);

    std::u16string expected = uR"({"a":1,"c":3})";
    EXPECT_EQ(a.toJSON(), expected);
    EXPECT_EQ(c.toJSON(), expected);
}

TEST(DynamicV, testOperatorDivPopArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = 2;

    var c = a / b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(c.length(), 4);

    EXPECT_EQ(c.toJSON(), array(1, 2, 3, 4).toJSON());
}

TEST(DynamicV, testOperatorDivPopArray2)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = 10;

    var c = a / b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(c.length(), 0);

    EXPECT_EQ(c.toJSON(), array().toJSON());
}

TEST(DynamicV, testOperatorDivShiftArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = -2;

    var c = a / b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(c.length(), 4);

    EXPECT_EQ(c.toJSON(), array(3, 4, 5, 6).toJSON());
}

TEST(DynamicV, testOperatorDivShiftArray2)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var b = -8;

    var c = a / b;

    EXPECT_EQ(a.length(), 6);
    EXPECT_EQ(c.length(), 0);

    EXPECT_EQ(c.toJSON(), array().toJSON());
}

TEST(DynamicV, testOperatorDivEqPopArray1)
{
    var a = array(1, 2, 3, 4, 5, 6);
    var c = a;
    a /= 2;

    EXPECT_EQ(a.length(), 4);
    EXPECT_EQ(c.length(), 4);

    EXPECT_EQ(a.toJSON(), array(1, 2, 3, 4).toJSON());
    EXPECT_EQ(c.toJSON(), a.toJSON());
}

TEST(DynamicV, testBasicOperators)
{
    var bTrue = true;
    var bFalse = false;
    var n101 = 10.1;
    var n502 = 50.2;
    var nn303 = -20.3;
    var sEmpty = "";
    var sHello = "Hello";
    var undef = undefined();
    var aEmpty = array();
    var a123 = array(1, 2, 3);

    EXPECT_EQ(n101 + n502 + nn303, 10.1 + 50.2 - 20.3);
    EXPECT_EQ(false, bTrue && bFalse);
    EXPECT_EQ(true, bTrue && bTrue);
    EXPECT_EQ(true, bTrue && bTrue);

    // EXPECT_EQ(a.toJSON(), array(1, 2, 3, 4).toJSON());
    // EXPECT_EQ(c.toJSON(), a.toJSON());
}

TEST(DynamicV, testStrToNumber)
{
    var str = "hallo";
    var num = str.toNumber();
    EXPECT_TRUE(isNaN(num));
}

TEST(DynamicV, testIsNaN1)
{
    EXPECT_TRUE(isNaN(NAN));
}

TEST(DynamicV, testIsNaN2)
{
    EXPECT_FALSE(isNaN("test"));
}

TEST(DynamicV, testIsNaN3)
{
    EXPECT_FALSE(isNaN(1.234));
}

TEST(DynamicV, testIsInifinity1)
{
    EXPECT_TRUE(isInfinity(json::parse("999e999")));
}

TEST(DynamicV, testIsInifinity2)
{
    EXPECT_FALSE(isInfinity("test"));
}

TEST(DynamicV, testIsInifinity3)
{
    EXPECT_FALSE(isInfinity(1.234));
}

TEST(DynamicV, JSONTestSuite)
{
#include "json-test-suite-filenames.h"

    for (const std::string &filePath : filenames)
    {
        const std::string &a = readFileIntoString(filePath);
        // std::cout << a << std::endl;

        bool shouldFail = false;
        try
        {
            std::u16string ignore = u16converter{}.from_bytes(a);
        }
        catch (...)
        {
            // data is not properly utf-8 encoded and cannot be converted to unicode
            shouldFail = true;
        }

        bool mustSuccess = filePath.find("/y_") != std::string::npos;
        bool mustFail = filePath.find("/n_") != std::string::npos;
        if (!mustSuccess && !mustFail)
        {
            mustSuccess = !shouldFail;
            mustFail = shouldFail;
        }

        if (mustFail)
        {
            ASSERT_THROW(json::parse(a), std::runtime_error);
        }
        else if (mustSuccess)
        {
            try
            {
                const var &obj = json::parse(a);
                ASSERT_TRUE(obj != undefined());
            }
            catch (std::runtime_error &e)
            {
                std::cerr << "Unexpected error while parsing:\n"
                          << a << std::endl;
                std::cerr << "Test file:\n"
                          << filePath << std::endl;
                throw e;
            }
        }
    }
}