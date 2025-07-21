#include "p238.hpp"

std::vector<int> p238::Solution::productExceptSelf(std::vector<int>& nums) {
    std::vector<int> result(nums.size());
    std::vector<int> result2(nums.size());

    int i;
    int j;

    result[0] = 1;
    for(i = 1, j = 0; i < nums.size(); i++, j++)
        result[i] = result[j] * nums[i - 1];

    result2[nums.size() - 1] = 1;
    for(i = nums.size() - 2, j = nums.size() - 1; i >= 0; i--, j--)
        result2[i] = nums[i + 1] * result2[j];

    for(i = 0; i < nums.size(); i++)
        result[i] = result[i] * result2[i];

    return result;
}