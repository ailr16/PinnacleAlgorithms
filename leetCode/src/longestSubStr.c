#include "longsetSubStr.h"

int lengthOfLongestSubstring(char* s){
    int maxCharCount = 0;
    int currentCharCount;
    char *i;
    __uint128_t var = 0;
    
    i = s;
    currentCharCount = 0;

    while( *i != '\0' ){
        if( ( var & ((__uint128_t)1 << *i) ) && 1 ){
            currentCharCount = 0;
            var = 0;
        }
        var ^= ( (__uint128_t)1 << *i );

        currentCharCount++;
        if( currentCharCount > maxCharCount ) maxCharCount = currentCharCount;
        i++;
    }

    return maxCharCount;
}