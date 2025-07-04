#include "p11.hpp"

int p11::Solution::maxArea(std::vector<int>& height){
    if(height.size() < 2)
        return 1;

    // Pointers
    int i = 0;
    int j = height.size() - 1;

    // Max State
    int maxArea = 0;

    while(i <= j){
        int area = min(height[i], height[j]) * (j - i);
        maxArea = (area > maxArea) ? area : maxArea;
        if(height[j] >= height[i]) i++;
        else j--;
    }

    return maxArea;
}