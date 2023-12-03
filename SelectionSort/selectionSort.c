//Works for numbers smaller than 0xFFFF

#include <stdio.h>

/*
    gcc -Wall -o SelectionSort/selectionSort SelectionSort/selectionSort.c -g
*/

int findSmallest( int *dataArray, int arraySize );
int selectionSort( int *dataArray, int *resultArray, int arraySize );
int popElement(int *dataArray, int arraySize, int elementIndex);
void printArray(int *dataArray, int arraySize);

int main(void)
{
    int dataToSort[] = { 12, 5, 34, 1, 16, 1999, 99, 48, -1, -1};
    int arraySize    = sizeof( dataToSort ) / sizeof( dataToSort[0] );

    int sortedData[arraySize];

    printArray(dataToSort, arraySize);

    selectionSort( dataToSort, sortedData, arraySize );

    printArray(sortedData, arraySize);
  

    return 0;
}


int findSmallest( int *dataArray, int arraySize )
{
    int smallest       = dataArray[ 0 ];
    int smallest_index = 0;
    int i              = 0;

    for( i = 0; i < arraySize; i++ )
    {
        if(dataArray[i] < smallest)
        {
            smallest       = dataArray[i];
            smallest_index = i;
        }
    }

    return smallest_index;
}


int selectionSort( int *dataArray, int *resultArray, int arraySize )
{
    int i = 0;
    int smallest = 0;

    for( i = 0; i < arraySize; i++ )
    {
        smallest       = findSmallest( dataArray, arraySize );
        resultArray[i] = popElement( dataArray, arraySize, smallest );
    }

    return 0;
}


int popElement(int *dataArray, int arraySize, int elementIndex)
{
    int elementValue = 0;
    int i            = 0;

    if(elementIndex < arraySize)
    {
        elementValue = dataArray[elementIndex];

        for( i = elementIndex; i < arraySize; i ++ )
        {
            if( (i + 1) < arraySize )
            {
                dataArray[ i ] = dataArray[i + 1];
            }
            else
            {
                dataArray[ i ] = 0xFFFF;
            }
        }
    }

    return elementValue;
}

void printArray(int *dataArray, int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        printf("%d ", dataArray[i]);
    }
    printf("\n");
}