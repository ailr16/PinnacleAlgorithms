#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

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

void twoSumTest(void) {
	int nums[3] = { 3, 2, 4};
	int* result;
	int returnSize;

	result = twoSum(nums, 3, 6, &returnSize);
	printf("%d %d\n", result[0], result[1]);
	free(result);
}


/**
 * Problem 2
 * Add Two Numbers
 */
struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* returnValue = NULL;
	struct ListNode* temp = NULL;

	struct ListNode* i1 = l1;
	struct ListNode* i2 = l2;

	char carry = 0;
	int sum = 0;

	while (i1 || i2 || carry) {
		if (i1) {
			sum += i1->val;
			i1 = i1->next;
		}

		if (i2) {
			sum += i2->val;
			i2 = i2->next;
		}

		if (carry) {
			sum++;
			carry = 0;
		}

		if (sum > 9) {
			carry = 1;
			sum = sum % 10;
		}

		struct ListNode* newNode = malloc(sizeof(struct ListNode));
		if (newNode) newNode->val = sum;

		if (returnValue) {
			temp->next = newNode;
			temp = newNode;
		}
		else {
			returnValue = temp = newNode;
		}

		sum = 0;
	}
	
	if (temp) temp->next = NULL;
	return returnValue;
}

void addTwoNumbersTest(void) {
	struct ListNode* result;

	struct ListNode l1d = { .val = 1, .next = NULL };
	struct ListNode l1  = { .val = 1, .next = &l1d };

	struct ListNode l2d = { .val = 9, .next = NULL };
	struct ListNode l2c = { .val = 9, .next = &l2d };
	struct ListNode l2b = { .val = 9, .next = &l2c };
	struct ListNode l2  = { .val = 9, .next = &l2b };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d\n", i->val);
		i = i->next;
	}
}


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

void isPalindromeTest(void) {
	printf("%d\n", isPalindrome(123));
	printf("%d\n", isPalindrome(12321));
	printf("%d\n", isPalindrome(121));
	printf("%d\n", isPalindrome(-121));
}


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

void reverseTest(void) {
	printf("%d\n", reverse(123));
	printf("%d\n", reverse(-123));
	printf("%d\n", reverse(120));
	printf("%d\n", reverse(10008000));
	printf("%d\n", reverse(-10008000));
	printf("%d\n", reverse(2147483647));
	printf("%d\n", reverse(-2147483647));
	printf("%d\n", reverse(746384749));
	printf("%d\n", reverse(1534236469));
}


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

void reverseBitsTest() {
	printf("%d\n", reverseBits(10));
	printf("%d\n", reverseBits(188));
	printf("%d\n", reverseBits(31890));
}


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

void hammingWeightTest(void) {
	printf("%d\n", hammingWeight(11));
	printf("%d\n", hammingWeight(128));
	printf("%d\n", hammingWeight(2147483645));
}


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

void myAtoiTest(void) {
	printf("%d\n", myAtoi("42"));
	printf("%d\n", myAtoi("    -42"));
	printf("%d\n", myAtoi("4193with words"));
	printf("%d\n", myAtoi("words and 987"));
}


/**
 * Problem 26
 * Remove duplicates from sorted array
 */
void printArray(int* array, int arraySize) {
	printf("[ ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");
}

void deleteAndShift(int* array, int arraySize, int index ) {
	for (int i = index; i < arraySize - index; i++) {
		array[i] = array[i + 1];
	}
}

int removeDuplicates(int* nums, int numsSize) {
	int remain = numsSize;

	for (int i = 0; i < remain; i++) {
		for (int j = i; j < remain - 1; j++) {
			if (nums[i] == nums[j]) {
				deleteAndShift(nums, numsSize, i);
				remain--;
			}
		}
	}

	return remain;
}


void removeDuplicatesTest(void) {
	int array1[3] = { 1,1,2 };
	int array2[10] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	int array3[16] = { 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 6, 18, 100, 112};

	int array1Size = removeDuplicates(array1, 3);
	printf("%d\t", array1Size);
	printArray(array1, array1Size);

	int array2Size = removeDuplicates(array2, 10);
	printf("%d\t", array2Size);
	printArray(array2, array2Size);

	int array3Size = removeDuplicates(array3, 16);
	printf("%d\t", array3Size);
	printArray(array3, array3Size);
}

int main() {
	removeDuplicatesTest();
	return 0;
}