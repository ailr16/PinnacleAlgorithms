#ifndef P_11_HPP
#define P_11_HPP

#include <iostream>
#include <vector>

namespace p11{
    class Solution{
        public:
            int maxArea(std::vector<int>& height);
        private:
            inline int min(int a, int b){
                return (a < b) ? a : b;
            }
    };
}

#endif