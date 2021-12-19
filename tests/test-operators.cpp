
#include <gtest/gtest.h>
#include "var.hpp"
#include <iostream>
#include <cuchar>
#include <fstream>
#include <glob.h>
#include <iomanip>


TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  var expected = -1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  var expected = 1.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  var expected = -100;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  var expected = "0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  var expected = "0hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  var expected = "0ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  var expected = "0[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  var expected = "0[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  var expected = "0[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  var expected = "0[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "0[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "0[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  var expected = "0null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  var expected = "0undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  var expected = 2;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  var expected = 2.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  var expected = -99;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  var expected = "1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  var expected = "1hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  var expected = "1ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  var expected = "1[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  var expected = "1[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  var expected = "1[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  var expected = 2;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  var expected = "1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  var expected = "1null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  var expected = "1undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  var expected = -1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  var expected = -2;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  var expected = 0.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  var expected = -101;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  var expected = "-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  var expected = "-1hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  var expected = "-1ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  var expected = "-1[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  var expected = "-1[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  var expected = "-1[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  var expected = -1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  var expected = "-1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "-1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "-1[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  var expected = "-1null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  var expected = "-1undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  var expected = "nan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  var expected = "nanhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  var expected = "nanሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  var expected = "nan[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  var expected = "nan[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  var expected = "nan[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  var expected = "nan[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "nan[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "nan[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  var expected = "nannull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  var expected = "nanundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  var expected = "inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  var expected = "infhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  var expected = "infሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  var expected = "inf[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  var expected = "inf[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  var expected = "inf[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  var expected = "inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  var expected = "infnull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  var expected = "infundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  var expected = "-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  var expected = "-infhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  var expected = "-infሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  var expected = "-inf[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  var expected = "-inf[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  var expected = "-inf[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  var expected = "-inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "-inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "-inf[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  var expected = "-infnull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  var expected = "-infundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  var expected = 1.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  var expected = 2.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  var expected = 0.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  var expected = 2.468;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  var expected = -98.766;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  var expected = "1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  var expected = "1.234hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  var expected = "1.234ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  var expected = "1.234[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  var expected = "1.234[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  var expected = "1.234[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  var expected = 2.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  var expected = 1.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  var expected = "1.234[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "1.234[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "1.234[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  var expected = "1.234null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  var expected = "1.234undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  var expected = -100;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  var expected = -99;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  var expected = -101;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  var expected = -98.766;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  var expected = -200;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  var expected = "-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  var expected = "-100hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  var expected = "-100ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  var expected = "-100[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  var expected = "-100[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  var expected = "-100[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  var expected = -99;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  var expected = -100;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  var expected = "-100[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "-100[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "-100[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  var expected = "-100null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  var expected = "-100undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  var expected = "0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  var expected = "1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  var expected = "-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  var expected = "nan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  var expected = "inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  var expected = "-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  var expected = "1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  var expected = "-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  var expected = "";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  var expected = "hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  var expected = "ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  var expected = "[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  var expected = "[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  var expected = "[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  var expected = "true";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  var expected = "false";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  var expected = "null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  var expected = "undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  var expected = "hello0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  var expected = "hello1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  var expected = "hello-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  var expected = "hellonan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  var expected = "helloinf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  var expected = "hello-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  var expected = "hello1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  var expected = "hello-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  var expected = "hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  var expected = "hellohello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  var expected = "helloሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  var expected = "hello[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  var expected = "hello[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  var expected = "hello[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  var expected = "hellotrue";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  var expected = "hellofalse";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  var expected = "hello[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "hello[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "hello[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  var expected = "hellonull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  var expected = "helloundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  var expected = "ሴ0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  var expected = "ሴ1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  var expected = "ሴ-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  var expected = "ሴnan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  var expected = "ሴinf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  var expected = "ሴ-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  var expected = "ሴ1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  var expected = "ሴ-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  var expected = "ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  var expected = "ሴhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  var expected = "ሴሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  var expected = "ሴ[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  var expected = "ሴ[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  var expected = "ሴ[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  var expected = "ሴtrue";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  var expected = "ሴfalse";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  var expected = "ሴ[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "ሴ[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "ሴ[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  var expected = "ሴnull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  var expected = "ሴundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  var expected = array(0);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  var expected = array(1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  var expected = array(-1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  var expected = array(NAN);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  var expected = array(INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  var expected = array(-INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  var expected = array(1.234);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  var expected = array(-100);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  var expected = array("");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  var expected = array("hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  var expected = array("ሴ");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array(1,"hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array(1,2);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  var expected = array(true);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  var expected = array(false);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  var expected = array(json::parse(uR"({})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(json::parse(uR"({"a":1})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(json::parse(uR"({"a":2,"b":3})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  var expected = array(null());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  var expected = array(undefined());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  var expected = array(1,"hello",0);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  var expected = array(1,"hello",1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  var expected = array(1,"hello",-1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  var expected = array(1,"hello",NAN);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  var expected = array(1,"hello",INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  var expected = array(1,"hello",-INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  var expected = array(1,"hello",1.234);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  var expected = array(1,"hello",-100);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  var expected = array(1,"hello","");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  var expected = array(1,"hello","hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  var expected = array(1,"hello","ሴ");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array(1,"hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array(1,"hello",1,"hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array(1,"hello",1,2);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  var expected = array(1,"hello",true);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  var expected = array(1,"hello",false);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  var expected = array(1,"hello",json::parse(uR"({})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(1,"hello",json::parse(uR"({"a":1})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(1,"hello",json::parse(uR"({"a":2,"b":3})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  var expected = array(1,"hello",null());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  var expected = array(1,"hello",undefined());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  var expected = array(1,2,0);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  var expected = array(1,2,1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  var expected = array(1,2,-1);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  var expected = array(1,2,NAN);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  var expected = array(1,2,INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  var expected = array(1,2,-INFINITY);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  var expected = array(1,2,1.234);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  var expected = array(1,2,-100);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  var expected = array(1,2,"");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  var expected = array(1,2,"hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  var expected = array(1,2,"ሴ");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array(1,2);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(1,2,1,"hello");
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array(1,2,1,2);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  var expected = array(1,2,true);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  var expected = array(1,2,false);
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  var expected = array(1,2,json::parse(uR"({})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(1,2,json::parse(uR"({"a":1})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(1,2,json::parse(uR"({"a":2,"b":3})"));
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  var expected = array(1,2,null());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  var expected = array(1,2,undefined());
  var result = val1 + val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  var expected = 2;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  var expected = 2.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  var expected = -99;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  var expected = "true";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  var expected = "truehello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  var expected = "trueሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  var expected = "true[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  var expected = "true[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  var expected = "true[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  var expected = 2;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  var expected = "true[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "true[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "true[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  var expected = "truenull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  var expected = "trueundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  var expected = -1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  var expected = 1.234;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  var expected = -100;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  var expected = "false";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  var expected = "falsehello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  var expected = "falseሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  var expected = "false[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  var expected = "false[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  var expected = "false[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  var expected = 1;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  var expected = 0;
  var result = val1 + val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  var expected = "false[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  var expected = "false[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "false[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  var expected = "falsenull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  var expected = "falseundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  var expected = "[object]0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  var expected = "[object]1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  var expected = "[object]-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  var expected = "[object]nan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  var expected = "[object]inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  var expected = "[object]-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  var expected = "[object]1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  var expected = "[object]-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  var expected = "[object]hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  var expected = "[object]ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  var expected = "[object][]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  var expected = "[object][1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  var expected = "[object][1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  var expected = "[object]true";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  var expected = "[object]false";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  var expected = "[object]undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  var expected = "[object]0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  var expected = "[object]1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  var expected = "[object]-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  var expected = "[object]nan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  var expected = "[object]inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  var expected = "[object]-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  var expected = "[object]1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  var expected = "[object]-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  var expected = "[object]hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  var expected = "[object]ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  var expected = "[object][]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  var expected = "[object][1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  var expected = "[object][1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  var expected = "[object]true";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  var expected = "[object]false";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  var expected = "[object]undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  var expected = "[object]0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  var expected = "[object]1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  var expected = "[object]-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  var expected = "[object]nan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  var expected = "[object]inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  var expected = "[object]-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  var expected = "[object]1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  var expected = "[object]-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  var expected = "[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  var expected = "[object]hello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  var expected = "[object]ሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  var expected = "[object][]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  var expected = "[object][1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  var expected = "[object][1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  var expected = "[object]true";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  var expected = "[object]false";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  var expected = "[object]undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  var expected = "null0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  var expected = "null1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  var expected = "null-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  var expected = "nullnan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  var expected = "nullinf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  var expected = "null-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  var expected = "null1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  var expected = "null-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  var expected = "null";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  var expected = "nullhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  var expected = "nullሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  var expected = "null[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  var expected = "null[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  var expected = "null[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  var expected = "nulltrue";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  var expected = "nullfalse";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 + val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  var expected = "nullundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  var expected = "undefined0";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  var expected = "undefined1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  var expected = "undefined-1";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  var expected = "undefinednan";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  var expected = "undefinedinf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  var expected = "undefined-inf";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  var expected = "undefined1.234";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  var expected = "undefined-100";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  var expected = "undefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  var expected = "undefinedhello";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  var expected = "undefinedሴ";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  var expected = "undefined[]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  var expected = "undefined[1,hello]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  var expected = "undefined[1,2]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  var expected = "undefinedtrue";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  var expected = "undefinedfalse";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  var expected = "undefined[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  var expected = "undefined[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "undefined[object]";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  var expected = "undefinednull";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  var expected = "undefinedundefined";
  var result = val1 + val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  var expected = 0;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  var expected = 1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  var expected = -1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  var expected = 1.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  var expected = -100;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  var expected = 1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  var expected = 0;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  var expected = 1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  var expected = 2;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  var expected = 0;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  var expected = 2.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  var expected = -99;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  var expected = 2;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  var expected = 1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  var expected = -1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  var expected = 0;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  var expected = -2;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  var expected = 0.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  var expected = -101;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  var expected = 0;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  var expected = -1;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  var expected = 1.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  var expected = 2.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  var expected = 0.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  var expected = 2.468;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  var expected = -98.766;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  var expected = 2.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  var expected = 1.234;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  var expected = -100;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  var expected = -99;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  var expected = -101;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  var expected = INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  var expected = -INFINITY;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  var expected = -98.766;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  var expected = -200;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  var expected = -99;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  var expected = -100;
  var result = val1 += val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_PLUS_EQUALS_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  var expected = "0";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  var expected = "1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  var expected = "-1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  var expected = "nan";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  var expected = "inf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  var expected = "-inf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  var expected = "1.234";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  var expected = "-100";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  var expected = "";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  var expected = "hello";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  var expected = "ሴ";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  var expected = "[]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  var expected = "[1,hello]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  var expected = "[1,2]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  var expected = "true";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  var expected = "false";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  var expected = "[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  var expected = "null";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  var expected = "undefined";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  var expected = "hello0";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  var expected = "hello1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  var expected = "hello-1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  var expected = "hellonan";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  var expected = "helloinf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  var expected = "hello-inf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  var expected = "hello1.234";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  var expected = "hello-100";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  var expected = "hello";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  var expected = "hellohello";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  var expected = "helloሴ";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  var expected = "hello[]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  var expected = "hello[1,hello]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  var expected = "hello[1,2]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  var expected = "hellotrue";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  var expected = "hellofalse";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  var expected = "hello[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "hello[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "hello[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  var expected = "hellonull";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  var expected = "helloundefined";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  var expected = "ሴ0";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  var expected = "ሴ1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  var expected = "ሴ-1";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  var expected = "ሴnan";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  var expected = "ሴinf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  var expected = "ሴ-inf";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  var expected = "ሴ1.234";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  var expected = "ሴ-100";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  var expected = "ሴ";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  var expected = "ሴhello";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  var expected = "ሴሴ";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  var expected = "ሴ[]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  var expected = "ሴ[1,hello]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  var expected = "ሴ[1,2]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  var expected = "ሴtrue";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  var expected = "ሴfalse";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  var expected = "ሴ[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  var expected = "ሴ[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = "ሴ[object]";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  var expected = "ሴnull";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_PLUS_EQUALS_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  var expected = "ሴundefined";
  var result = val1 += val2;
  EXPECT_EQ(STRING, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  var expected = array(0);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  var expected = array(1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  var expected = array(-1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  var expected = array(NAN);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  var expected = array(INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  var expected = array(-INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  var expected = array(1.234);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  var expected = array(-100);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  var expected = array("");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  var expected = array("hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  var expected = array("ሴ");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array(1,"hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array(1,2);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  var expected = array(true);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  var expected = array(false);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  var expected = array(json::parse(uR"({})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(json::parse(uR"({"a":1})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(json::parse(uR"({"a":2,"b":3})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  var expected = array(null());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  var expected = array(undefined());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  var expected = array(1,"hello",0);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  var expected = array(1,"hello",1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  var expected = array(1,"hello",-1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  var expected = array(1,"hello",NAN);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  var expected = array(1,"hello",INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  var expected = array(1,"hello",-INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  var expected = array(1,"hello",1.234);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  var expected = array(1,"hello",-100);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  var expected = array(1,"hello","");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  var expected = array(1,"hello","hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  var expected = array(1,"hello","ሴ");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array(1,"hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array(1,"hello",1,"hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array(1,"hello",1,2);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  var expected = array(1,"hello",true);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  var expected = array(1,"hello",false);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  var expected = array(1,"hello",json::parse(uR"({})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(1,"hello",json::parse(uR"({"a":1})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(1,"hello",json::parse(uR"({"a":2,"b":3})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  var expected = array(1,"hello",null());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  var expected = array(1,"hello",undefined());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  var expected = array(1,2,0);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  var expected = array(1,2,1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  var expected = array(1,2,-1);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  var expected = array(1,2,NAN);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  var expected = array(1,2,INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  var expected = array(1,2,-INFINITY);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  var expected = array(1,2,1.234);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  var expected = array(1,2,-100);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  var expected = array(1,2,"");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  var expected = array(1,2,"hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  var expected = array(1,2,"ሴ");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array(1,2);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(1,2,1,"hello");
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array(1,2,1,2);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  var expected = array(1,2,true);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  var expected = array(1,2,false);
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  var expected = array(1,2,json::parse(uR"({})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  var expected = array(1,2,json::parse(uR"({"a":1})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = array(1,2,json::parse(uR"({"a":2,"b":3})"));
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  var expected = array(1,2,null());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_PLUS_EQUALS_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  var expected = array(1,2,undefined());
  var result = val1 += val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  var expected = false;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  var expected = false;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  var expected = true;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  var expected = false;
  var result = val1 += val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_PLUS_EQUALS_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 += val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_PLUS_EQUALS_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_PLUS_EQUALS_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 += val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  var expected = -1.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  var expected = 100;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  var expected = 2;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  var expected = -0.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  var expected = 101;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  var expected = -2;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  var expected = -2.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  var expected = 99;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  var expected = -2;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  var expected = 1.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  var expected = 0.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  var expected = 2.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  var expected = 101.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  var expected = 0.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  var expected = 1.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  var expected = -100;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  var expected = -101;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  var expected = -99;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  var expected = -101.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  var expected = -101;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  var expected = -100;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array();
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array(1,"hello");
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array("hello");
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array(1,2);
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(2);
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array();
  var result = val1 - val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  var expected = 2;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  var expected = -0.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  var expected = 101;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  var expected = 1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  var expected = -1.234;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  var expected = 100;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  var expected = -1;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  var expected = 0;
  var result = val1 - val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"b":3})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 - val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 - val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  var expected = -1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  var expected = 1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  var expected = -1.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  var expected = 100;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  var expected = -1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  var expected = 1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  var expected = 2;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  var expected = -0.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  var expected = 101;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  var expected = 1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  var expected = -1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  var expected = -2;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  var expected = -2.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  var expected = 99;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  var expected = -2;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  var expected = -1;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  var expected = 1.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  var expected = 0.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  var expected = 2.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  var expected = 101.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  var expected = 0.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  var expected = 1.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  var expected = -100;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  var expected = -101;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  var expected = -99;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  var expected = NAN;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_TRUE(isNaN(result));
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  var expected = -INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  var expected = INFINITY;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  var expected = -101.234;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  var expected = 0;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  var expected = -101;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  var expected = -100;
  var result = val1 -= val2;
  EXPECT_EQ(NUMBER, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_MINUS_EQUALS_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_MINUS_EQUALS_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array();
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array(1,"hello");
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array("hello");
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array(1,2);
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(2);
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array();
  var result = val1 -= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_MINUS_EQUALS_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  var expected = false;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  var expected = false;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  var expected = false;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  var expected = true;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  var expected = false;
  var result = val1 -= val2;
  EXPECT_EQ(BOOLEAN, result.getType());
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_MINUS_EQUALS_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"b":3})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 -= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_MINUS_EQUALS_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_MINUS_EQUALS_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 -= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  var expected = array(1,"hello");
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  var expected = array("hello");
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  var expected = array(1,"hello");
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  var expected = array(1,"hello");
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array(1,"hello");
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  var expected = array(1,2);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  var expected = array(2);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  var expected = array(1,2);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  var expected = array(1,2);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array();
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(1);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array(1,2);
  var result = val1 / val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":2})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 / val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 / val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_0)
{
  var val1 = 0;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_1)
{
  var val1 = 0;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_2)
{
  var val1 = 0;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_3)
{
  var val1 = 0;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_4)
{
  var val1 = 0;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_5)
{
  var val1 = 0;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_6)
{
  var val1 = 0;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_0_0_7)
{
  var val1 = 0;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_0_1_0)
{
  var val1 = 0;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_0_1_1)
{
  var val1 = 0;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_0_1_2)
{
  var val1 = 0;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_0_2_0)
{
  var val1 = 0;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_0_2_1)
{
  var val1 = 0;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_0_2_2)
{
  var val1 = 0;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_0_3_0)
{
  var val1 = 0;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_0_3_1)
{
  var val1 = 0;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_0_4_0)
{
  var val1 = 0;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_0_4_1)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_0_4_2)
{
  var val1 = 0;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_0_4_3)
{
  var val1 = 0;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_0_4_4)
{
  var val1 = 0;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_0)
{
  var val1 = 1;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_1)
{
  var val1 = 1;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_2)
{
  var val1 = 1;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_3)
{
  var val1 = 1;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_4)
{
  var val1 = 1;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_5)
{
  var val1 = 1;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_6)
{
  var val1 = 1;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_1_0_7)
{
  var val1 = 1;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_1_1_0)
{
  var val1 = 1;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_1_1_1)
{
  var val1 = 1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_1_1_2)
{
  var val1 = 1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_1_2_0)
{
  var val1 = 1;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_1_2_1)
{
  var val1 = 1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_1_2_2)
{
  var val1 = 1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_1_3_0)
{
  var val1 = 1;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_1_3_1)
{
  var val1 = 1;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_1_4_0)
{
  var val1 = 1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_1_4_1)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_1_4_2)
{
  var val1 = 1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_1_4_3)
{
  var val1 = 1;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_1_4_4)
{
  var val1 = 1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_0)
{
  var val1 = -1;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_1)
{
  var val1 = -1;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_2)
{
  var val1 = -1;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_3)
{
  var val1 = -1;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_4)
{
  var val1 = -1;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_5)
{
  var val1 = -1;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_6)
{
  var val1 = -1;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_2_0_7)
{
  var val1 = -1;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_2_1_0)
{
  var val1 = -1;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_2_1_1)
{
  var val1 = -1;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_2_1_2)
{
  var val1 = -1;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_2_2_0)
{
  var val1 = -1;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_2_2_1)
{
  var val1 = -1;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_2_2_2)
{
  var val1 = -1;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_2_3_0)
{
  var val1 = -1;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_2_3_1)
{
  var val1 = -1;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_2_4_0)
{
  var val1 = -1;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_2_4_1)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_2_4_2)
{
  var val1 = -1;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_2_4_3)
{
  var val1 = -1;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_2_4_4)
{
  var val1 = -1;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_0)
{
  var val1 = NAN;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_1)
{
  var val1 = NAN;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_2)
{
  var val1 = NAN;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_3)
{
  var val1 = NAN;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_4)
{
  var val1 = NAN;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_5)
{
  var val1 = NAN;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_6)
{
  var val1 = NAN;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_3_0_7)
{
  var val1 = NAN;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_3_1_0)
{
  var val1 = NAN;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_3_1_1)
{
  var val1 = NAN;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_3_1_2)
{
  var val1 = NAN;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_3_2_0)
{
  var val1 = NAN;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_3_2_1)
{
  var val1 = NAN;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_3_2_2)
{
  var val1 = NAN;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_3_3_0)
{
  var val1 = NAN;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_3_3_1)
{
  var val1 = NAN;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_3_4_0)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_3_4_1)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_3_4_2)
{
  var val1 = NAN;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_3_4_3)
{
  var val1 = NAN;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_3_4_4)
{
  var val1 = NAN;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_0)
{
  var val1 = INFINITY;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_1)
{
  var val1 = INFINITY;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_2)
{
  var val1 = INFINITY;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_3)
{
  var val1 = INFINITY;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_4)
{
  var val1 = INFINITY;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_5)
{
  var val1 = INFINITY;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_6)
{
  var val1 = INFINITY;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_4_0_7)
{
  var val1 = INFINITY;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_4_1_0)
{
  var val1 = INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_4_1_1)
{
  var val1 = INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_4_1_2)
{
  var val1 = INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_4_2_0)
{
  var val1 = INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_4_2_1)
{
  var val1 = INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_4_2_2)
{
  var val1 = INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_4_3_0)
{
  var val1 = INFINITY;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_4_3_1)
{
  var val1 = INFINITY;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_4_4_0)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_4_4_1)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_4_4_2)
{
  var val1 = INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_4_4_3)
{
  var val1 = INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_4_4_4)
{
  var val1 = INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_0)
{
  var val1 = -INFINITY;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_1)
{
  var val1 = -INFINITY;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_2)
{
  var val1 = -INFINITY;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_3)
{
  var val1 = -INFINITY;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_4)
{
  var val1 = -INFINITY;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_5)
{
  var val1 = -INFINITY;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_6)
{
  var val1 = -INFINITY;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_5_0_7)
{
  var val1 = -INFINITY;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_5_1_0)
{
  var val1 = -INFINITY;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_5_1_1)
{
  var val1 = -INFINITY;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_5_1_2)
{
  var val1 = -INFINITY;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_5_2_0)
{
  var val1 = -INFINITY;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_5_2_1)
{
  var val1 = -INFINITY;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_5_2_2)
{
  var val1 = -INFINITY;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_5_3_0)
{
  var val1 = -INFINITY;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_5_3_1)
{
  var val1 = -INFINITY;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_5_4_0)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_5_4_1)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_5_4_2)
{
  var val1 = -INFINITY;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_5_4_3)
{
  var val1 = -INFINITY;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_5_4_4)
{
  var val1 = -INFINITY;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_0)
{
  var val1 = 1.234;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_1)
{
  var val1 = 1.234;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_2)
{
  var val1 = 1.234;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_3)
{
  var val1 = 1.234;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_4)
{
  var val1 = 1.234;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_5)
{
  var val1 = 1.234;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_6)
{
  var val1 = 1.234;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_6_0_7)
{
  var val1 = 1.234;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_6_1_0)
{
  var val1 = 1.234;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_6_1_1)
{
  var val1 = 1.234;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_6_1_2)
{
  var val1 = 1.234;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_6_2_0)
{
  var val1 = 1.234;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_6_2_1)
{
  var val1 = 1.234;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_6_2_2)
{
  var val1 = 1.234;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_6_3_0)
{
  var val1 = 1.234;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_6_3_1)
{
  var val1 = 1.234;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_6_4_0)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_6_4_1)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_6_4_2)
{
  var val1 = 1.234;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_6_4_3)
{
  var val1 = 1.234;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_6_4_4)
{
  var val1 = 1.234;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_0)
{
  var val1 = -100;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_1)
{
  var val1 = -100;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_2)
{
  var val1 = -100;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_3)
{
  var val1 = -100;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_4)
{
  var val1 = -100;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_5)
{
  var val1 = -100;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_6)
{
  var val1 = -100;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_NUMBER_0_7_0_7)
{
  var val1 = -100;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_7_1_0)
{
  var val1 = -100;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_7_1_1)
{
  var val1 = -100;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_STRING_0_7_1_2)
{
  var val1 = -100;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_7_2_0)
{
  var val1 = -100;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_7_2_1)
{
  var val1 = -100;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_ARRAY_0_7_2_2)
{
  var val1 = -100;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_7_3_0)
{
  var val1 = -100;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_BOOLEAN_0_7_3_1)
{
  var val1 = -100;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_7_4_0)
{
  var val1 = -100;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_7_4_1)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_7_4_2)
{
  var val1 = -100;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_OBJECT_0_7_4_3)
{
  var val1 = -100;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_DIV_EQUALS_UNDEFINED_0_7_4_4)
{
  var val1 = -100;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_0)
{
  var val1 = "";
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_1)
{
  var val1 = "";
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_2)
{
  var val1 = "";
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_3)
{
  var val1 = "";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_4)
{
  var val1 = "";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_5)
{
  var val1 = "";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_6)
{
  var val1 = "";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_0_0_7)
{
  var val1 = "";
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_0_1_0)
{
  var val1 = "";
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_0_1_1)
{
  var val1 = "";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_0_1_2)
{
  var val1 = "";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_0_2_0)
{
  var val1 = "";
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_0_2_1)
{
  var val1 = "";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_0_2_2)
{
  var val1 = "";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_0_3_0)
{
  var val1 = "";
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_0_3_1)
{
  var val1 = "";
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_0_4_0)
{
  var val1 = "";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_0_4_1)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_0_4_2)
{
  var val1 = "";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_0_4_3)
{
  var val1 = "";
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_UNDEFINED_1_0_4_4)
{
  var val1 = "";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_0)
{
  var val1 = "hello";
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_1)
{
  var val1 = "hello";
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_2)
{
  var val1 = "hello";
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_3)
{
  var val1 = "hello";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_4)
{
  var val1 = "hello";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_5)
{
  var val1 = "hello";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_6)
{
  var val1 = "hello";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_1_0_7)
{
  var val1 = "hello";
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_1_1_0)
{
  var val1 = "hello";
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_1_1_1)
{
  var val1 = "hello";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_1_1_2)
{
  var val1 = "hello";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_1_2_0)
{
  var val1 = "hello";
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_1_2_1)
{
  var val1 = "hello";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_1_2_2)
{
  var val1 = "hello";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_1_3_0)
{
  var val1 = "hello";
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_1_3_1)
{
  var val1 = "hello";
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_1_4_0)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_1_4_1)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_1_4_2)
{
  var val1 = "hello";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_1_4_3)
{
  var val1 = "hello";
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_UNDEFINED_1_1_4_4)
{
  var val1 = "hello";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_0)
{
  var val1 = "ሴ";
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_1)
{
  var val1 = "ሴ";
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_2)
{
  var val1 = "ሴ";
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_3)
{
  var val1 = "ሴ";
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_4)
{
  var val1 = "ሴ";
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_5)
{
  var val1 = "ሴ";
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_6)
{
  var val1 = "ሴ";
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_NUMBER_1_2_0_7)
{
  var val1 = "ሴ";
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_2_1_0)
{
  var val1 = "ሴ";
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_2_1_1)
{
  var val1 = "ሴ";
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_STRING_1_2_1_2)
{
  var val1 = "ሴ";
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_2_2_0)
{
  var val1 = "ሴ";
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_2_2_1)
{
  var val1 = "ሴ";
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_ARRAY_1_2_2_2)
{
  var val1 = "ሴ";
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_2_3_0)
{
  var val1 = "ሴ";
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_BOOLEAN_1_2_3_1)
{
  var val1 = "ሴ";
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_2_4_0)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_2_4_1)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_2_4_2)
{
  var val1 = "ሴ";
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_OBJECT_1_2_4_3)
{
  var val1 = "ሴ";
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, STRING_DIV_EQUALS_UNDEFINED_1_2_4_4)
{
  var val1 = "ሴ";
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_0)
{
  var val1 = array();
  var val2 = 0;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_1)
{
  var val1 = array();
  var val2 = 1;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_2)
{
  var val1 = array();
  var val2 = -1;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_3)
{
  var val1 = array();
  var val2 = NAN;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_4)
{
  var val1 = array();
  var val2 = INFINITY;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_5)
{
  var val1 = array();
  var val2 = -INFINITY;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_6)
{
  var val1 = array();
  var val2 = 1.234;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_0_0_7)
{
  var val1 = array();
  var val2 = -100;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_0_1_0)
{
  var val1 = array();
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_0_1_1)
{
  var val1 = array();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_0_1_2)
{
  var val1 = array();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_0_2_0)
{
  var val1 = array();
  var val2 = array();
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_0_2_1)
{
  var val1 = array();
  var val2 = array(1,"hello");
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_0_2_2)
{
  var val1 = array();
  var val2 = array(1,2);
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_0_3_0)
{
  var val1 = array();
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_0_3_1)
{
  var val1 = array();
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_0_4_0)
{
  var val1 = array();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_0_4_1)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_0_4_2)
{
  var val1 = array();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_0_4_3)
{
  var val1 = array();
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_UNDEFINED_2_0_4_4)
{
  var val1 = array();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_0)
{
  var val1 = array(1,"hello");
  var val2 = 0;
  var expected = array(1,"hello");
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_1)
{
  var val1 = array(1,"hello");
  var val2 = 1;
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_2)
{
  var val1 = array(1,"hello");
  var val2 = -1;
  var expected = array("hello");
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_3)
{
  var val1 = array(1,"hello");
  var val2 = NAN;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_4)
{
  var val1 = array(1,"hello");
  var val2 = INFINITY;
  var expected = array(1,"hello");
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_5)
{
  var val1 = array(1,"hello");
  var val2 = -INFINITY;
  var expected = array(1,"hello");
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_6)
{
  var val1 = array(1,"hello");
  var val2 = 1.234;
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_1_0_7)
{
  var val1 = array(1,"hello");
  var val2 = -100;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_1_1_0)
{
  var val1 = array(1,"hello");
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_1_1_1)
{
  var val1 = array(1,"hello");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_1_1_2)
{
  var val1 = array(1,"hello");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_1_2_0)
{
  var val1 = array(1,"hello");
  var val2 = array();
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_1_2_1)
{
  var val1 = array(1,"hello");
  var val2 = array(1,"hello");
  var expected = array(1,"hello");
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_1_2_2)
{
  var val1 = array(1,"hello");
  var val2 = array(1,2);
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_1_3_0)
{
  var val1 = array(1,"hello");
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_1_3_1)
{
  var val1 = array(1,"hello");
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_1_4_0)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_1_4_1)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_1_4_2)
{
  var val1 = array(1,"hello");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_1_4_3)
{
  var val1 = array(1,"hello");
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_UNDEFINED_2_1_4_4)
{
  var val1 = array(1,"hello");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_0)
{
  var val1 = array(1,2);
  var val2 = 0;
  var expected = array(1,2);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_1)
{
  var val1 = array(1,2);
  var val2 = 1;
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_2)
{
  var val1 = array(1,2);
  var val2 = -1;
  var expected = array(2);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_3)
{
  var val1 = array(1,2);
  var val2 = NAN;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_4)
{
  var val1 = array(1,2);
  var val2 = INFINITY;
  var expected = array(1,2);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_5)
{
  var val1 = array(1,2);
  var val2 = -INFINITY;
  var expected = array(1,2);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_6)
{
  var val1 = array(1,2);
  var val2 = 1.234;
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_NUMBER_2_2_0_7)
{
  var val1 = array(1,2);
  var val2 = -100;
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_2_1_0)
{
  var val1 = array(1,2);
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_2_1_1)
{
  var val1 = array(1,2);
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_STRING_2_2_1_2)
{
  var val1 = array(1,2);
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_2_2_0)
{
  var val1 = array(1,2);
  var val2 = array();
  var expected = array();
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_2_2_1)
{
  var val1 = array(1,2);
  var val2 = array(1,"hello");
  var expected = array(1);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_ARRAY_2_2_2_2)
{
  var val1 = array(1,2);
  var val2 = array(1,2);
  var expected = array(1,2);
  var result = val1 /= val2;
  EXPECT_EQ(ARRAY, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_2_3_0)
{
  var val1 = array(1,2);
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_BOOLEAN_2_2_3_1)
{
  var val1 = array(1,2);
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_2_4_0)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_2_4_1)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_2_4_2)
{
  var val1 = array(1,2);
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_OBJECT_2_2_4_3)
{
  var val1 = array(1,2);
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, ARRAY_DIV_EQUALS_UNDEFINED_2_2_4_4)
{
  var val1 = array(1,2);
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_0)
{
  var val1 = true;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_1)
{
  var val1 = true;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_2)
{
  var val1 = true;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_3)
{
  var val1 = true;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_4)
{
  var val1 = true;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_5)
{
  var val1 = true;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_6)
{
  var val1 = true;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_0_0_7)
{
  var val1 = true;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_0_1_0)
{
  var val1 = true;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_0_1_1)
{
  var val1 = true;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_0_1_2)
{
  var val1 = true;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_0_2_0)
{
  var val1 = true;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_0_2_1)
{
  var val1 = true;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_0_2_2)
{
  var val1 = true;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_BOOLEAN_3_0_3_0)
{
  var val1 = true;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_BOOLEAN_3_0_3_1)
{
  var val1 = true;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_0_4_0)
{
  var val1 = true;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_0_4_1)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_0_4_2)
{
  var val1 = true;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_0_4_3)
{
  var val1 = true;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_UNDEFINED_3_0_4_4)
{
  var val1 = true;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_0)
{
  var val1 = false;
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_1)
{
  var val1 = false;
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_2)
{
  var val1 = false;
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_3)
{
  var val1 = false;
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_4)
{
  var val1 = false;
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_5)
{
  var val1 = false;
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_6)
{
  var val1 = false;
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_NUMBER_3_1_0_7)
{
  var val1 = false;
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_1_1_0)
{
  var val1 = false;
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_1_1_1)
{
  var val1 = false;
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_STRING_3_1_1_2)
{
  var val1 = false;
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_1_2_0)
{
  var val1 = false;
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_1_2_1)
{
  var val1 = false;
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_ARRAY_3_1_2_2)
{
  var val1 = false;
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_BOOLEAN_3_1_3_0)
{
  var val1 = false;
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_BOOLEAN_3_1_3_1)
{
  var val1 = false;
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_1_4_0)
{
  var val1 = false;
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_1_4_1)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_1_4_2)
{
  var val1 = false;
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_OBJECT_3_1_4_3)
{
  var val1 = false;
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, BOOLEAN_DIV_EQUALS_UNDEFINED_3_1_4_4)
{
  var val1 = false;
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_5)
{
  var val1 = json::parse(uR"({})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_6)
{
  var val1 = json::parse(uR"({})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_0_0_7)
{
  var val1 = json::parse(uR"({})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_0_1_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_0_1_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_0_1_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_0_2_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_0_2_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_0_2_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_0_3_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_0_3_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_0_4_0)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_0_4_1)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_0_4_2)
{
  var val1 = json::parse(uR"({})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_0_4_3)
{
  var val1 = json::parse(uR"({})");
  var val2 = null();
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_UNDEFINED_4_0_4_4)
{
  var val1 = json::parse(uR"({})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_5)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_6)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_1_0_7)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_1_1_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_1_1_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_1_1_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_1_2_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_1_2_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_1_2_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_1_3_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_1_3_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_1_4_0)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_1_4_1)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_1_4_2)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":1})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_1_4_3)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = null();
  var expected = json::parse(uR"({"a":1})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_UNDEFINED_4_1_4_4)
{
  var val1 = json::parse(uR"({"a":1})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_5)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_6)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_2_0_7)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_2_1_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_2_1_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_2_1_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_2_2_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_2_2_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_2_2_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_2_3_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_2_3_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_2_4_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({})");
  var expected = json::parse(uR"({})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_2_4_1)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":1})");
  var expected = json::parse(uR"({"a":2})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_2_4_2)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_2_4_3)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = null();
  var expected = json::parse(uR"({"a":2,"b":3})");
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_UNDEFINED_4_2_4_4)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_0)
{
  var val1 = null();
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_1)
{
  var val1 = null();
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_2)
{
  var val1 = null();
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_3)
{
  var val1 = null();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_4)
{
  var val1 = null();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_5)
{
  var val1 = null();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_6)
{
  var val1 = null();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_NUMBER_4_3_0_7)
{
  var val1 = null();
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_3_1_0)
{
  var val1 = null();
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_3_1_1)
{
  var val1 = null();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_STRING_4_3_1_2)
{
  var val1 = null();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_3_2_0)
{
  var val1 = null();
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_3_2_1)
{
  var val1 = null();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_ARRAY_4_3_2_2)
{
  var val1 = null();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_3_3_0)
{
  var val1 = null();
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_BOOLEAN_4_3_3_1)
{
  var val1 = null();
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_3_4_0)
{
  var val1 = null();
  var val2 = json::parse(uR"({})");
  var expected = null();
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_3_4_1)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":1})");
  var expected = null();
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_3_4_2)
{
  var val1 = null();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  var expected = null();
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_OBJECT_4_3_4_3)
{
  var val1 = null();
  var val2 = null();
  var expected = null();
  var result = val1 /= val2;
  EXPECT_EQ(OBJECT, result.getType());
  EXPECT_EQ(expected.toJSON(), result.toJSON());
}

TEST(GeneratedOperatorTests, OBJECT_DIV_EQUALS_UNDEFINED_4_3_4_4)
{
  var val1 = null();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_0)
{
  var val1 = undefined();
  var val2 = 0;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_1)
{
  var val1 = undefined();
  var val2 = 1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_2)
{
  var val1 = undefined();
  var val2 = -1;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_3)
{
  var val1 = undefined();
  var val2 = NAN;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_4)
{
  var val1 = undefined();
  var val2 = INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_5)
{
  var val1 = undefined();
  var val2 = -INFINITY;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_6)
{
  var val1 = undefined();
  var val2 = 1.234;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_NUMBER_4_4_0_7)
{
  var val1 = undefined();
  var val2 = -100;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_STRING_4_4_1_0)
{
  var val1 = undefined();
  var val2 = "";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_STRING_4_4_1_1)
{
  var val1 = undefined();
  var val2 = "hello";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_STRING_4_4_1_2)
{
  var val1 = undefined();
  var val2 = "ሴ";
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_ARRAY_4_4_2_0)
{
  var val1 = undefined();
  var val2 = array();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_ARRAY_4_4_2_1)
{
  var val1 = undefined();
  var val2 = array(1,"hello");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_ARRAY_4_4_2_2)
{
  var val1 = undefined();
  var val2 = array(1,2);
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_BOOLEAN_4_4_3_0)
{
  var val1 = undefined();
  var val2 = true;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_BOOLEAN_4_4_3_1)
{
  var val1 = undefined();
  var val2 = false;
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_OBJECT_4_4_4_0)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_OBJECT_4_4_4_1)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":1})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_OBJECT_4_4_4_2)
{
  var val1 = undefined();
  var val2 = json::parse(uR"({"a":2,"b":3})");
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_OBJECT_4_4_4_3)
{
  var val1 = undefined();
  var val2 = null();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, UNDEFINED_DIV_EQUALS_UNDEFINED_4_4_4_4)
{
  var val1 = undefined();
  var val2 = undefined();
  EXPECT_THROW(var result = val1 /= val2;, std::runtime_error);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_0_0_0)
{
  var val1 = 0;
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_1_0_0)
{
  var val1 = 1;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_2_0_0)
{
  var val1 = -1;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_3_0_0)
{
  var val1 = NAN;
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_4_0_0)
{
  var val1 = INFINITY;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_5_0_0)
{
  var val1 = -INFINITY;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_6_0_0)
{
  var val1 = 1.234;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, NUMBER_BOOL_0_7_0_0)
{
  var val1 = -100;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_BOOL_1_0_0_0)
{
  var val1 = "";
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_BOOL_1_1_0_0)
{
  var val1 = "hello";
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, STRING_BOOL_1_2_0_0)
{
  var val1 = "ሴ";
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, ARRAY_BOOL_2_0_0_0)
{
  var val1 = array();
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, ARRAY_BOOL_2_1_0_0)
{
  var val1 = array(1,"hello");
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, ARRAY_BOOL_2_2_0_0)
{
  var val1 = array(1,2);
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_BOOL_3_0_0_0)
{
  var val1 = true;
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, BOOLEAN_BOOL_3_1_0_0)
{
  var val1 = false;
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_BOOL_4_0_0_0)
{
  var val1 = json::parse(uR"({})");
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_BOOL_4_1_0_0)
{
  var val1 = json::parse(uR"({"a":1})");
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_BOOL_4_2_0_0)
{
  var val1 = json::parse(uR"({"a":2,"b":3})");
  bool expected = true;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, OBJECT_BOOL_4_3_0_0)
{
  var val1 = null();
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

TEST(GeneratedOperatorTests, UNDEFINED_BOOL_4_4_0_0)
{
  var val1 = undefined();
  bool expected = false;
  bool result = (bool)val1;
  EXPECT_EQ(expected, result);
}

