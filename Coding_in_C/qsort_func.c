#include "stdio.h"
#include "stdlib.h" //memory calloc/malloc/realloc/qsort() func (QUIC SORT FUNC O(nlogn .. Linearithmic time))

#define SIZE 5
int comparator(const void *a, const void *b)
{
    return *(int*)a - *(int*)b; 
}

int main()
{
//qsort(arr, arr_size, sizeof datatype of each element,comp func)
    int arr[SIZE] = {10, 2, 9, 0, 8};

    //sorting the array:
    qsort(arr, SIZE, sizeof(arr[0]), comparator);

    //print sorted array 
    for(int i =0; i <SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}