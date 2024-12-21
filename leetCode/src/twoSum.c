#include "twoSum.h"

/**
 * Problem 1
 * Two Sum
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i, j;

	*returnSize = 2;

	int* returnArray = (int*)malloc(*returnSize * sizeof(int));
	if (returnArray == NULL) {
		*returnSize = 0;
		return NULL;
	}
	
	for (i = 0; i < numsSize; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if ((nums[i] + nums[j]) == target) {
				returnArray[0] = i;
				returnArray[1] = j;
				return returnArray;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}