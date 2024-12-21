#include "hammingWeight.h"

/**
 * Problem 191
 * Number of 1 Bits
 */
int hammingWeight(int n) {
	int bits = 0;

	while (n) {
		if(n & 1) bits++;
		n >>= 1;
	}

	return bits;
}