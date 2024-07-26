// gcc -Wall -o Sort/MergeSort/MergeSort Sort/MergeSort/MergeSort.c && ./Sort/MergeSort/MergeSort 

#include <stdio.h>

void merge_sort( int *array, int length );
void merge_sort_recursion( int *a, int left, int right );
void merge_sorted_arrays( int *a, int left, int mid, int right );
void print_array( int *array, int length );

int main(){
    int array[] = { 3, 2, 5, 0, 1, 8, 7, 6, 9, 4 };
    int length = 10;

    merge_sort( array, length );
    print_array( array, length );

    return 0;
}

void merge_sort_recursion( int *a, int left, int right ){
    if( left < right ){
        int mid = left + ( right - left ) / 2;
        printf("mid=%d\n", mid);
        merge_sort_recursion( a, left, mid );
        merge_sort_recursion( a, mid + 1, right );
        
        merge_sorted_arrays( a, left, mid, right );
    }
}

void merge_sorted_arrays( int *a, int left, int mid, int right ){
    int left_length = mid - left + 1;
    int rigth_length = right - mid;

    int temp_left[left_length];
    int temp_right[rigth_length];

    int i, j, k;

    for( int i = 0; i < left_length; i++ )
        temp_left[i] = a[left + i];

    for( int i = 0; i < rigth_length; i++ )
        temp_right[i] = a[mid + i + 1];

    for( i = 0, j = 0, k = left; k <= right; k++){
        if( (i < left_length) && (j >= rigth_length || temp_left[i] <= temp_right[j]) ){
            a[k] = temp_left[i];
            i++;
        }
        else{
            a[k] = temp_right[j];
            j++;
        }
    }
}

void print_array( int *array, int length ){
    printf("[ ");
    for( int i = 0; i < length; i++ ){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

void merge_sort( int *array, int length ){
    merge_sort_recursion( array, 0, length - 1 );
}
