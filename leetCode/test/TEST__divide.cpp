#include <gtest/gtest.h>
#include "divide.h"

TEST(DivideTest, testAreaMethod){
    ASSERT_EQ(divide(-10, -3), 3);
    ASSERT_EQ(divide(-2147483647, -1), 2147483647);
    ASSERT_EQ(divide(2147483647, -1), -2147483647);
}