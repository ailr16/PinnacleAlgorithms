//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o DivideAndConquer/MaxNumberArray/maxNumArray DivideAndConquer/MaxNumberArray/maxNumArray.c -g
    ./DivideAndConquer/MaxNumberArray/maxNumArray
*/

int max( int a, int b )
{
    return a > b ? a : b ;
}

int maxNumArray( int A[], int n )
{
    if (n == 1)
        return A[0];
    return max( A[n - 1], maxNumArray(A, n - 1) );
}

int main( void )
{
    int a[6] = {1, 2, 3, 18, 5, 6};
    printf("Max= %d\n", maxNumArray( a, 6 ));
    return 0;
}
