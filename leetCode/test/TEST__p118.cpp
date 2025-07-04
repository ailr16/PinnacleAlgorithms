#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "p118.hpp"

void humanReadable(std::vector<std::vector<int>>& v){
    std::cout << "[";
    for(auto i : v){
        std::cout << "[ ";
        for(auto j : i){
            std::cout << j << " ";
        }
        std::cout << "]";
    }
    std::cout << "]" << std::endl;
}

TEST(Problem118Test, testSolution_2rows){
    p118::Solution pascal;
    std::vector<std::vector<int>> result;
    std::vector<std::vector<int>> expected = {{1},{1,1}};
    result = pascal.generate(2);

    EXPECT_EQ(result.size(), expected.size());
    for(int row = 0; row < expected.size(); row++){
        for(int coeff = 0; coeff < expected[row].size(); coeff++){
            EXPECT_EQ(expected[row][coeff], result[row][coeff]);
        }
    }
}

TEST(Problem118Test, testSolution_3rows){
    p118::Solution pascal;
    std::vector<std::vector<int>> result;
    std::vector<std::vector<int>> expected = {{1},{1,1},{1,2,1}};
    result = pascal.generate(3);

    EXPECT_EQ(result.size(), expected.size());
    for(int row = 0; row < expected.size(); row++){
        for(int coeff = 0; coeff < expected[row].size(); coeff++){
            EXPECT_EQ(expected[row][coeff], result[row][coeff]);
        }
    }
}

TEST(Problem118Test, testSolution_4rows){
    p118::Solution pascal;
    std::vector<std::vector<int>> result;
    std::vector<std::vector<int>> expected = {{1},{1,1},{1,2,1},{1,3,3,1}};
    result = pascal.generate(4);

    EXPECT_EQ(result.size(), expected.size());
    for(int row = 0; row < expected.size(); row++){
        for(int coeff = 0; coeff < expected[row].size(); coeff++){
            EXPECT_EQ(expected[row][coeff], result[row][coeff]);
        }
    }
}