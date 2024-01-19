#include <stdio.h>

/*
    gcc -Wall -o Sort/SelectionSort/selectionSort Sort/SelectionSort/selectionSort.c -g && ./Sort/SelectionSort/selectionSort
*/

void swap( int *a, int *b )
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int findSmallest( int *dataArray, int startIndex, int arraySize )
{
    int smallest       = dataArray[ startIndex ];
    int smallest_index = startIndex;
    int i              = 0;

    for( i = startIndex; i < arraySize; i++ )
    {
        if(dataArray[i] < smallest)
        {
            smallest       = dataArray[i];
            smallest_index = i;
        }
    }

    return smallest_index;
}


int selectionSort( int *dataArray, int arraySize )
{
    int i = 0;
    int smallestIndex = 0;

    for( i = 0; i < arraySize; i++ )
    {
        smallestIndex = findSmallest( dataArray, i, arraySize );
        swap( &dataArray[smallestIndex], &dataArray[i] );
    }

    return 0;
}


void printArray(int *dataArray, int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        printf("%d ", dataArray[i]);
    }
    printf("\n");
}

int main(void)
{
    int dataToSort[10] = { 12, 5, 34, 1, 16, 1999, 99, 48, -1, -1};
    int array2[40] = { 6717, 7811, 4833, 2017, 7240, 8425, 1848, 8343,
                     4164, 6041, 5741, 4891, 9364, 7811, 318,  8208,
                     8144, 6556, 7906, 8964, 5266, 1951, 3594, 4165,
                     3496, 7897, 3745, 6745, 5301, 3362, 3914, 7683,
                     9164, 6216, 6887, 5492, 1961, 9719, 3717, 7484 };

    printf("Unsorted: ");
    printArray(dataToSort, 10);
    selectionSort( dataToSort, 10 );
    printf("Sorted: ");
    printArray(dataToSort, 10);

    printf("Unsorted: ");
    printArray(array2, 40);
    selectionSort( array2, 40 );
    printf("Sorted: ");
    printArray(array2, 40);
  
  

    return 0;
}
