#include "p118.hpp"

std::vector<std::vector<int>> p118::Solution::generate(int numRows) {
    std::vector<std::vector<int>> result;
    
    for(int i = 0; i < numRows; i++){
        std::vector<int> temp;
        for(int j = 0; j < i + 1; j++){
            if(j == 0 || j == i)
                temp.push_back(1);
            else{
                if(i > 1){
                    temp.push_back(result[i - 1][j - 1]+result[i - 1][j]);
                }
            }
        }
        result.push_back(temp);
    }

    return result;
}