#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__addTwoNumbers_original(void) {
	struct ListNode* result;

	struct ListNode l1b = { .val = 3, .next = NULL };
	struct ListNode l1a = { .val = 4, .next = &l1b };
	struct ListNode l1  = { .val = 2, .next = &l1a };

	struct ListNode l2b = { .val = 4, .next = NULL };
	struct ListNode l2a = { .val = 6, .next = &l2b };
	struct ListNode l2  = { .val = 5, .next = &l2a };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}

void TEST__addTwoNumbers_42p5(void) {
	struct ListNode* result;

	struct ListNode l1a = { .val = 4, .next = NULL };
	struct ListNode l1  = { .val = 2, .next = &l1a };

	struct ListNode l2  = { .val = 5, .next = NULL };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}

void TEST__addTwoNumbers_99p1(void) {
	struct ListNode* result;

	struct ListNode l1a = { .val = 9, .next = NULL };
	struct ListNode l1  = { .val = 9, .next = &l1a };

	struct ListNode l2  = { .val = 1, .next = NULL };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}

void TEST__addTwoNumbers_3p67(void) {
	struct ListNode* result;

	struct ListNode l1  = { .val = 3, .next = NULL };

	struct ListNode l2a = { .val = 6, .next = NULL };
	struct ListNode l2  = { .val = 7, .next = &l2a };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}


void TEST__addTwoNumbers__11p9999(void) {
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
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}

void TEST__addTwoNumbers__16p32(void) {
	struct ListNode* result;

	struct ListNode l1d = { .val = 1, .next = NULL };
	struct ListNode l1  = { .val = 16, .next = &l1d };

	struct ListNode l2a = { .val = 3, .next = NULL };
	struct ListNode l2  = { .val = 2, .next = &l2a };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d ", i->val);
		i = i->next;
	}
	printf("\n");
}

void Register_tests_addTwoNumbers(void){
    SingleTestBlock test;

	test.function = TEST__addTwoNumbers_original;
	strcpy( test.testName, "Add Two Numbers. Expected: 7 0 8" );
	registerTest( &htest, &test );

	test.function = TEST__addTwoNumbers_42p5;
	strcpy( test.testName, "Add Two Numbers. Expected: 7 4" );
	registerTest( &htest, &test );

	test.function = TEST__addTwoNumbers_3p67;
	strcpy( test.testName, "Add Two Numbers. Expected: 0 7" );
	registerTest( &htest, &test );

	test.function = TEST__addTwoNumbers_99p1;
	strcpy( test.testName, "Add Two Numbers. Expected: 0 0 1" );
	registerTest( &htest, &test );

	test.function = TEST__addTwoNumbers__11p9999;
	strcpy( test.testName, "Add Two Numbers. Expected: 0 1 0 0 1" );
	registerTest( &htest, &test );

	test.function = TEST__addTwoNumbers__16p32;
	strcpy( test.testName, "Add Two Numbers. Expected: 0 1 0 0 1" );
	registerTest( &htest, &test );
}