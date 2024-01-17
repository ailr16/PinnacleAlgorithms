#include <stdio.h>

/*
    gcc -Wall -o Quicksort/quicksort Quicksort/quicksort.c -g && ./Quicksort/quicksort
    gdb Quicksort/quicksort
*/

void swap( int *a, int *b )
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int partition( int *a, int start, int end )
{
    int pivot = a[ end ];
    int i = start - 1;

    for( int j = start; j <= end; j++ )
    {
        if( a[ j ] < pivot )
        {
            i++;
            swap( &a[ i ], &a[ j ] );
        }
    }

    swap( &a[ i + 1 ], &a[ end ] );

    return (i + 1);
}

void quicksort( int *a, int start, int end )
{
    if( start < end )
    {
        int pi = partition( a, start, end );
        quicksort( a, start, pi - 1 );      // Lower values
        quicksort( a, pi + 1, end );        // Higher values
    }
}

void printArray( int *a, int size )
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }printf("\n");
}

int main( void )
{
    int array1[8] = {1, 3, 5, 7, 2, 4, 6, 8};
    int array2[8] = {2, 4, 6, 8, 1, 3, 5, 7};
    int array3[10] = {3, 2, 5, 0, 1, 8, 7, 6, 9, 4};
    int array4[8] = {2, 4, -99, 1, 1, 3, 5, 7};
    int array5[5] = {1, 3, 5, 7, 2};

    quicksort( array1, 0, 7 );
    quicksort( array2, 0, 7 );
    quicksort( array3, 0, 9 );
    quicksort( array4, 0, 7 );
    quicksort( array5, 0, 4 );

    printArray( array1, 8 );
    printArray( array2, 8 );
    printArray( array3, 10 );
    printArray( array4, 8 );
    printArray( array5, 5 );

    return 0;
}
