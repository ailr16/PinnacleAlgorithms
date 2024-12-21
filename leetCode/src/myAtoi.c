#include "myAtoi.h"

/**
 * Problem 8
 * String to Integer
 */
int myAtoi(char* s) {
	bool sign = 0;
	int number = 0;

	while (*s != '\0') {
		if (*s == ' ');
		if (*s == '-') sign = true;
		if (*s == '+') sign = false;
		if (*s >= '0' && *s <= '9') {
			number = number * 10;
			number += *s - '0';
			if (s[1] == ' ') break;
		}
		s++;
	}

	if (sign) number *= -1;

	return number;
}