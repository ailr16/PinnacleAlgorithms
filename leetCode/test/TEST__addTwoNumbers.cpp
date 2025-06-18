#include <gtest/gtest.h>
#include "addTwoNumbers.h"
#include <iostream>

TEST(AddTwoNumbersTest, sum42p5){
    struct ListNode* result;

	struct ListNode l1a = { .val = 4, .next = NULL };
	struct ListNode l1  = { .val = 2, .next = &l1a };

	struct ListNode l2  = { .val = 5, .next = NULL };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

    std::string strResult;
	while (i) {
        strResult += std::to_string(i->val);
		i = i->next;
	}
    ASSERT_STREQ(strResult.c_str(), "74");
}

TEST(AddTwoNumbersTest, sum99p1){
    struct ListNode* result;

	struct ListNode l1a = { .val = 9, .next = NULL };
	struct ListNode l1  = { .val = 9, .next = &l1a };

	struct ListNode l2  = { .val = 1, .next = NULL };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	std::string strResult;
	while (i) {
        strResult += std::to_string(i->val);
		i = i->next;
	}
    ASSERT_STREQ(strResult.c_str(), "001");
}

TEST(AddTwoNumbersTest, sum3p67){
    struct ListNode* result;

	struct ListNode l1  = { .val = 3, .next = NULL };

	struct ListNode l2a = { .val = 6, .next = NULL };
	struct ListNode l2  = { .val = 7, .next = &l2a };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	std::string strResult;
	while (i) {
        strResult += std::to_string(i->val);
		i = i->next;
	}
    ASSERT_STREQ(strResult.c_str(), "07");
}

TEST(AddTwoNumbersTest, sum11p9999){
    struct ListNode* result;

	struct ListNode l1d = { .val = 1, .next = NULL };
	struct ListNode l1  = { .val = 1, .next = &l1d };

	struct ListNode l2d = { .val = 9, .next = NULL };
	struct ListNode l2c = { .val = 9, .next = &l2d };
	struct ListNode l2b = { .val = 9, .next = &l2c };
	struct ListNode l2  = { .val = 9, .next = &l2b };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	std::string strResult;
	while (i) {
        strResult += std::to_string(i->val);
		i = i->next;
	}
    ASSERT_STREQ(strResult.c_str(), "01001");
}

TEST(AddTwoNumbersTest, sum16p32){
    struct ListNode* result;

	struct ListNode l1d = { .val = 1, .next = NULL };
	struct ListNode l1  = { .val = 6, .next = &l1d };

	struct ListNode l2a = { .val = 3, .next = NULL };
	struct ListNode l2  = { .val = 2, .next = &l2a };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	std::string strResult;
	while (i) {
        strResult += std::to_string(i->val);
		i = i->next;
	}
    ASSERT_STREQ(strResult.c_str(), "84");
}