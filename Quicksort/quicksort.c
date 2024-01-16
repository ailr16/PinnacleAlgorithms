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

int quicksort( int *a, int size )
{
    if( size == 0 )
        return 1;

    int pivotIndex = size - 1;
    int swapIndex = 0;
    for( int i = 0; i < pivotIndex; i++ )
    {
        if( a[ i ] <= a[ pivotIndex ] )
        {
            swapIndex++;
            if( a[ i ] > a[ swapIndex ] )
            {
                swap( &a[ i ], &a[ swapIndex ] );
            }
        }
    }
    
    quicksort( a, size - 1 );
    return 0;
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

    quicksort( array1, 8 );
    quicksort( array2, 8 );
    quicksort( array3, 10 );

    printArray( array1, 8 );
    printArray( array2, 8 );
    printArray( array3, 10 );

    return 0;
}
