PROJECT_NAME  := leetCodeProblems

CC		      := gcc
CCFLAGS 	  := 

PROJECT_DIR   := $(CURDIR)
BUILD_DIR     := $(PROJECT_DIR)/Build
INCLUDE_DIR   := $(PROJECT_DIR)/inc

SRCS          := main.c
SRCS		  += src/twoSum.c
SRCS		  += src/addTwoNumbers.c
SRCS		  += src/isPalindrome.c
SRCS		  += src/reverse.c
SRCS		  += src/reverseBits.c

all : $(SRCS)
	mkdir $(BUILD_DIR) -p
	$(CC) -o $(BUILD_DIR)/$(PROJECT_NAME) $^ $(CCFLAGS) -I $(INCLUDE_DIR)

.PHONY: run
run:
	$(BUILD_DIR)/$(PROJECT_NAME)

.PHONY: clean
clean:
	rm -r $(BUILD_DIR)