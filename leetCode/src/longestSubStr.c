#include "longsetSubStr.h"

int lengthOfLongestSubstring(char* s){
    int maxCharCount = 0;
    int currentCharCount;
    char *i;
    char *j;
    __uint128_t var = 0;
    
    i = s;
    j = s;
    currentCharCount = 0;

    while( (*i != '\0') && (*j != '\0') ){
        if( ( var & ((__uint128_t)1 << *j) ) && 1 ){
            i++;
            j = i;
            currentCharCount = 0;
            var = 0;
        }
        var ^= ( (__uint128_t)1 << *j );

        currentCharCount++;
        if( currentCharCount > maxCharCount ) maxCharCount = currentCharCount;
        j++;
    }

    return maxCharCount;
}