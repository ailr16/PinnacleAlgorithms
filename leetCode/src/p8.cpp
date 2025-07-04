#include "p8.hpp"

int p8::Solution::myAtoi(std::string s){
    int result = 0;
    bool signFlag = false;
    bool startFlag = false;

    for(char c : s){
        if(c == ' ') continue;
        if(c == '-') signFlag = true;
        if(!startFlag){
            if(c > '0') startFlag = true;
        }
        if(startFlag){
            if(c >= '0' && c <= '9'){
                result *= 10;
                result += c - '0';
            }
            else{
                break;
            }
        }
    }

    if(signFlag) result *= -1;
    return result;
}