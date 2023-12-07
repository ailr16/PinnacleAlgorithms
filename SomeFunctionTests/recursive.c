//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o SomeFunctionTests/recursive SomeFunctionTests/recursive.c -g  
*/

void countdown( int n );
int fibonacci( int n );

int main( void )
{
    countdown( 16 );
    printf("Fibonacci (7)= %d\n", fibonacci( 7 ));
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