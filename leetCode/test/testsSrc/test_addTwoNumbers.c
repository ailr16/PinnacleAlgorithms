#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__addTwoNumbers(void) {
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

void Register_tests_addTwoNumbers(void){
    SingleTestBlock test;

	test.function = TEST__addTwoNumbers;
	strcpy( test.testName, "Add Two Numbers. Expected: 0 1 0 0 1" );
	registerTest( &htest, &test );
}