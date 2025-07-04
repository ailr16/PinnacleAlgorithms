#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "p11.hpp"

TEST(Problem11Test, testSolution_28){
    p11::Solution test;
    std::vector<int> height = {1, 8, 6, 2, 8, 7};

    EXPECT_EQ(test.maxArea(height), 28);
}

TEST(Problem11Test, testSolution_40){
    p11::Solution test;
    std::vector<int> height = {8, 1, 6, 2, 8, 8};

    EXPECT_EQ(test.maxArea(height), 40);
}

TEST(Problem11Test, testSolution_35){
    p11::Solution test;
    std::vector<int> height = {8, 1, 6, 2, 8, 7};

    EXPECT_EQ(test.maxArea(height), 35);
}