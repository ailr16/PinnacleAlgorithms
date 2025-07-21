#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "p12.hpp"

TEST(Problem12Test, testSolution){
    p12::Solution test;

    EXPECT_EQ(test.intToRoman(3749), "MMMDCCXLIX");
}