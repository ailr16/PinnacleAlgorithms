#include "divide.h"

/**
 * Problem 29
 * Divide two integers
 */
int divide(int dividend, int divisor) {
	bool sign = (dividend < 0) ^ (divisor < 0);
	
	if (divisor == 0) return 0;
	if ((dividend == INT_MAX && divisor == 1) || (divisor == -INT_MAX && dividend == -1)) return INT_MAX;
	if ((dividend == INT_MIN && divisor == 1) || (divisor == -INT_MAX && dividend == -1)) return INT_MIN;

	unsigned result = 0;
	int udividend = abs(dividend);
	int udivisor = abs(divisor);

	while (udividend >= udivisor) {
		udividend -= udivisor;
		result++;
	}

	if (sign) result *= -1;

	return result;
}