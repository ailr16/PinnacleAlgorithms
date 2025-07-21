#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "p238.hpp"

TEST(Problem238Test, testSolution_lc_case1){
    p238::Solution arrayProduct;
    
    std::vector<int> result;
    std::vector<int> testArray = {1, 2, 3, 4};
    
    result = arrayProduct.productExceptSelf(testArray);

    EXPECT_EQ(result, std::vector<int>({24, 12, 8, 6}));
}

TEST(Problem238Test, testSolution_lc_case2){
    p238::Solution arrayProduct;
    
    std::vector<int> result;
    std::vector<int> testArray = {-1, 1, 0, -3, 3};
    
    result = arrayProduct.productExceptSelf(testArray);

    EXPECT_EQ(result, std::vector<int>({0,0,9,0,0}));
}