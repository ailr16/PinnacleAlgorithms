#include "reverse.h"

/**
 * Problem 7
 * Reverse Integer
 */
int reverse(int x) {
	int reversedNumber = 0;

	while (x) {
		if (reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10) {
			return 0;
		}
		reversedNumber *= 10;
		reversedNumber += x % 10;
		x /= 10;
	}

	return reversedNumber;
}