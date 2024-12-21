#include "isPalindrome.h"

/**
 * Problem 9
 * Palindrome Number
 */
bool isPalindrome(int x) {
	long reversedNumber = 0;
	int originalNumber = x;

	if (x < 0)
		return false;

	while (x != 0) {
		reversedNumber *= 10;
		reversedNumber += x % 10;
		x /= 10;
	}

	if (originalNumber == reversedNumber)
		return true;
	else
		return false;
}