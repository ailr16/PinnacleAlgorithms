#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__reverseList(void) {
	struct ListNode* result;

	struct ListNode l1f = { .val = 4, .next = NULL };
	struct ListNode l1e = { .val = 4, .next = &l1f };
	struct ListNode l1d = { .val = 4, .next = &l1e };
	struct ListNode l1c = { .val = 3, .next = &l1d };
	struct ListNode l1b = { .val = 2, .next = &l1c };
	struct ListNode l1 = { .val = 1, .next = &l1b };

	struct ListNode l2d = { .val = 9, .next = NULL };
	struct ListNode l2c = { .val = 9, .next = &l2d };
	struct ListNode l2b = { .val = 9, .next = &l2c };
	struct ListNode l2 = { .val = 9, .next = &l2b };

	struct ListNode* i = &l1;

	result = reverseList(&l1);
}


void Register_tests_reverseList(void){
    SingleTestBlock test;

	test.function = TEST__reverseList;
	strcpy( test.testName, "Reverse List. Expected:" );
	registerTest( &htest, &test );
}