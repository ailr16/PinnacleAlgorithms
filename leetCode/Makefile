PROJECT_NAME  := leetCodeProblems

CC		      := gcc
CCFLAGS 	  := 

PROJECT_DIR   := $(CURDIR)
BUILD_DIR     := $(PROJECT_DIR)/Build
INCLUDE_DIR   := $(PROJECT_DIR)/inc

TEST_INC_DIR      := $(PROJECT_DIR)/test/inc

SRCS		  := src/twoSum.c
SRCS		  += src/addTwoNumbers.c
SRCS		  += src/isPalindrome.c
SRCS		  += src/reverse.c
SRCS		  += src/reverseBits.c
SRCS		  += src/hammingWeight.c
SRCS		  += src/myAtoi.c
SRCS		  += src/removeDuplicates.c
SRCS		  += src/divide.c
SRCS		  += src/reverseList.c
SRCS          += test/src/testHandler.c
SRCS          += main.c

all : $(SRCS)
	mkdir $(BUILD_DIR) -p
	$(CC) -o $(BUILD_DIR)/$(PROJECT_NAME) $^ $(CCFLAGS) -I $(INCLUDE_DIR) -I $(TEST_INC_DIR)

.PHONY: run
run:
	$(BUILD_DIR)/$(PROJECT_NAME)

.PHONY: clean
clean:
	rm -r $(BUILD_DIR)