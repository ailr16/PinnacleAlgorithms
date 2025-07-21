#include "p238.hpp"

std::vector<int> p238::Solution::productExceptSelf(std::vector<int>& nums) {
    std::vector<int> result(nums.size());

    int i;

    result[0] = 1;
    for(i = 1; i < nums.size(); i++)
        result[i] = result[i - 1] * nums[i - 1];

    int carry = 1;
    for(i = nums.size() - 2; i >= 0; i--){
        carry *= nums[i + 1];
        result[i] *= carry;
    }

    return result;
}