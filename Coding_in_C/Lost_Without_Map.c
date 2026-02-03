#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int *maps(const int *arr, size_t size) 
{
    int *updated_arr = (int*) malloc(sizeof(int) *size); 
    for(size_t i = 0; i <  size; i++)
    {
        updated_arr[i] = arr[i] *2;
    }
    return updated_arr;
}

int main()
{
    int arr[] = {1, 2, 3};
    size_t size = sizeof(arr)/ sizeof(arr[0]);
    int *updated = maps(arr, size);
    for(size_t j = 0; j < size; j++)
    {
        printf("%zu ", updated[j]);
    }
    free(updated);
    updated = NULL;

}