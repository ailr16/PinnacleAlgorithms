#include "p12.hpp"

std::string normalConversion(int& num){
    std::string result;

    while(num >= 1000){
        result.append("M");
        num -= 1000;
    }

    while(num >= 500){
        result.append("D");
        num -= 500;
    }

    while(num >= 100){
        result.append("C");
        num -= 100;
    }

    return result;
}

std::string p12::Solution::intToRoman(int num){
    std::string result;


    result = normalConversion(num);
    std::cout << "Current num: " << num << std::endl;

    return result;
}