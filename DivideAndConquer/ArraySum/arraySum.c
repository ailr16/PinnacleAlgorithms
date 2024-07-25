//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o DivideAndConquer/ArraySum/arraySum DivideAndConquer/ArraySum/arraySum.c -g
    ./DivideAndConquer/ArraySum/arraySum
*/

int arraySum( int* A, int n )
{
    if( n == 0 )
        return 0;

    return A[n - 1] + arraySum( A, n - 1 );
}


int main( void )
{
    int a[6] = {1, 2, 3, 18, 5, 6};
    int b[24] = {1, 2, 3, 18, 5, 6, 12, 3, 3, 3, 45, 4, 13, 14, 15, 16, 124, 1, 15, 20, 21, 22, 23, 24};
    int c[4] = {1, 2, 3, 4};
    printf( "Sum = %d\n", arraySum( a, 6 ) );
    printf( "Sum = %d\n", arraySum( b, 24 ) );
    printf( "Sum = %d\n", arraySum( c, 4 ) );
    return 0;
}
