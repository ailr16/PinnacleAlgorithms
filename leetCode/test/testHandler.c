#include "testHandler.h"

void initTests( TestsHandler *htests, SingleTestBlock *testsBuffer ){
    htests->buffer      = testsBuffer;
    htests->totalTests  = 0;
    htests->currentTest = 0;
}

void registerTest( TestsHandler *htests, SingleTestBlock *test ){
    memcpy( (htests->buffer + htests->totalTests), test, sizeof(SingleTestBlock) );
    htests->totalTests++;
}

void runTests( TestsHandler *htests ){
    printf("|=================================\n");
    printf("|Tests Info:\n");
    printf("|\tTotal tests:%d\n", htests->totalTests);
    printf("|Starting tests...\n");
    printf("|=================================\n");
    for( htests->currentTest = 0; htests->currentTest < htests->totalTests; htests->currentTest++){
        printf("--------------------------------\n");
        printf("%s\n", htests->buffer[htests->currentTest].testName);
        htests->buffer[htests->currentTest].function();
    }
    printf("|=================================\n");
    printf("...finished!\n");
}