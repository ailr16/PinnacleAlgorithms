#ifndef TEST_HANDLER_H
#define TEST_HANDLER_H

#include <stdint.h>
#include <string.h>

typedef struct _test{
    void (*function)(void);
} SingleTestBlock;

typedef struct _tests{
    SingleTestBlock *buffer;
    uint8_t totalTests;
    uint8_t currentTest;
} TestsHandler;
 
void initTests( TestsHandler *htests, SingleTestBlock *testsBuffer );
void registerTest( TestsHandler *htests, SingleTestBlock *test );
void runTests( TestsHandler *htests );

#endif