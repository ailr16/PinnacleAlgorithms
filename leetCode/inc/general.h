#ifndef GENERAL_H
#define GENERAL_H

/* Headers used in all solutions */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

void printArray(int* array, int arraySize);

#endif