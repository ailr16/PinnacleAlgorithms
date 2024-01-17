//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o SomeFunctionTests/recursive SomeFunctionTests/recursive.c -g && ./SomeFunctionTests/recursive
*/

void countdown( int n );
int fibonacci( int n );
int fibonacciI( int n );
int factorial( int n );
int sumNnat( int n);
int xpown( int x, int n );

int main( void )
{
    countdown( 16 );
    printf("Fibonacci (12)= %d\n", fibonacci( 12 ));
    printf("7!= %d\n", factorial( 7 ));
    printf("0!= %d\n", factorial( 0 ));
    printf("Sum of 7 first natural numbers= %d\n", sumNnat( 7 ));
    printf("2^16= %d\n", xpown( 2, 16 ));
    printf("3^4= %d\n", xpown( 3, 4 ));
    printf("Fibonacci iterative: %d\n", fibonacciI( 12 ));
    return 0;
}

void countdown( int n )
{
    printf("Countdown: %d\n", n);
    if( n > 0 )
    {
        countdown( n - 1 );
    }
}

int fibonacci( int n )
{
    if( n <= 1 )
    {
        return n;
    }

    return ( fibonacci( n - 1 ) + fibonacci( n - 2 ) );
}

int fibonacciI( int n )
{
    int i = 0;
    int j = 1;
    int aux = 0;

    for( int k = 0; k < n - 1 ; k++ )
    {
        aux = i + j;
        i = j;
        j = aux;
    }
    
    return j;
}

int factorial( int n )
{
    if( n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumNnat( int n)
{
    if( n <= 1 )
    {
        return n;
    }
    return n + sumNnat( n - 1 );
}

int xpown( int x, int n )
{
    if(n == 1)
    {
        return x;
    }
    return x * xpown( x, n - 1 );
}