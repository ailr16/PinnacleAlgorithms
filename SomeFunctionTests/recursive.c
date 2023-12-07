//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o SomeFunctionTests/recursive SomeFunctionTests/recursive.c -g  
*/

void countdown( int n );

int main( void )
{
    countdown( 16 );
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