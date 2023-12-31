//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o SomeFunctionTests/recursive SomeFunctionTests/recursive.c -g  
*/

void countdown( int n );
int fibonacci( int n );
int factorial( int n );
int sumNnat( int n);
int xpown( int x, int n );

int main( void )
{
    countdown( 16 );
    printf("Fibonacci (7)= %d\n", fibonacci( 7 ));
    printf("7!= %d\n", factorial( 7 ));
    printf("0!= %d\n", factorial( 0 ));
    printf("Sum of 7 first natural numbers= %d\n", sumNnat( 7 ));
    printf("2^16= %d\n", xpown( 2, 16 ));
    printf("3^4= %d\n", xpown( 3, 4 ));
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