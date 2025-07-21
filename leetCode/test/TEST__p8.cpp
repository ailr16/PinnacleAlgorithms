#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "p8.hpp"

TEST(Problem8Test, testSolution){
    p8::Solution test;

    EXPECT_EQ(test.myAtoi("    -542"), -542);
    EXPECT_EQ(test.myAtoi("-542"), -542);
    EXPECT_EQ(test.myAtoi("      542"), 542);
    EXPECT_EQ(test.myAtoi("    -0000542"), -542);
    EXPECT_EQ(test.myAtoi("0000542"), 542);
    EXPECT_EQ(test.myAtoi("000054200"), 54200);
    EXPECT_EQ(test.myAtoi("00005420a"), 5420);
    EXPECT_EQ(test.myAtoi(""), 0);
    EXPECT_EQ(test.myAtoi("abc"), 0);
    EXPECT_EQ(test.myAtoi("   1"), 1);
    EXPECT_EQ(test.myAtoi("   -1"), -1);
    EXPECT_EQ(test.myAtoi("   +1"), 1);
    EXPECT_EQ(test.myAtoi("   001"), 1);
    EXPECT_EQ(test.myAtoi("   00100x"), 100);
    EXPECT_EQ(test.myAtoi("abc"), 0);
    EXPECT_EQ(test.myAtoi("0-1"), 0);
    EXPECT_EQ(test.myAtoi("-91283472332"), INT_MIN);
    EXPECT_EQ(test.myAtoi(".1"), 0);
    EXPECT_EQ(test.myAtoi("+-12"), 0);
    EXPECT_EQ(test.myAtoi("   +0 123"), 0);
}