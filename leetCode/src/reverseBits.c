#include "reverseBits.h"

/**
 * Problem 190
 * Reverse Bits
 */
uint32_t reverseBits(uint32_t n) {
	uint32_t reversed = 0;

	for (char i = 0; i < 32; i++) {
		reversed = reversed << 1;
		reversed |= n & 1;
		n = n >> 1;
	}

	return reversed;
}