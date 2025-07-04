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

}