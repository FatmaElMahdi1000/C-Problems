#include "stdio.h"

#define SIZE 5
int sqr(int arr[SIZE])
{
    for (int i = 0; i< SIZE; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
}

int main()
{
    int arr[SIZE] = {2, 4, 6, 8, 9};
    sqr(arr);
}