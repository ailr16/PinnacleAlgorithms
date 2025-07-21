#include "p8.hpp"

int p8::Solution::myAtoi(std::string s){
    long long result = 0;
    int sign = 1;
    bool startFlag = false;

    for(char c : s){
        if(!startFlag){
            if(c == ' ') continue;
            if(c == '.') return 0;
            else if(c == '+' || c == '-'){
                startFlag = true;
                if(c == '-') sign = -1;
                continue;
            }
            else if(c >= '0') startFlag = true;
        }

        if(startFlag){
            if(c == ' ') break;
            if(c >= '0' && c <= '9'){
                result *= 10;
                result += c - '0';

                if(result * sign <= INT_MIN) return INT_MIN;
                if(result * sign >= INT_MAX) return INT_MAX;
            }
            else break;
        }
    }

    result *= sign;
    return result;
}