PROJECT_NAME  := leetCodeProblems

CC		      := gcc
CCFLAGS 	  := -g

PROJECT_DIR   := $(CURDIR)
BUILD_DIR     := $(PROJECT_DIR)/Build
INCLUDE_DIR   := $(PROJECT_DIR)/inc

TEST_DIR      := $(PROJECT_DIR)/test

SRCS          := main.c
SRCS		  += src/twoSum.c
SRCS		  += src/addTwoNumbers.c
SRCS		  += src/longestSubStr.c
SRCS		  += src/isPalindrome.c
SRCS		  += src/reverse.c
SRCS		  += src/reverseBits.c
SRCS		  += src/hammingWeight.c
SRCS		  += src/myAtoi.c
SRCS		  += src/removeDuplicates.c
SRCS		  += src/divide.c
SRCS		  += src/reverseList.c
SRCS          += test/testHandler.c
SRCS		  += $(wildcard test/testsSrc/test_*.c)

all : $(SRCS)
	mkdir $(BUILD_DIR) -p
	$(CC) -o $(BUILD_DIR)/$(PROJECT_NAME) $^ $(CCFLAGS) -I $(INCLUDE_DIR) -I $(TEST_DIR)

.PHONY: run
run:
	$(BUILD_DIR)/$(PROJECT_NAME)

.PHONY: debug
debug:
	gdb $(BUILD_DIR)/$(PROJECT_NAME)

.PHONY: clean
clean:
	rm -r $(BUILD_DIR)