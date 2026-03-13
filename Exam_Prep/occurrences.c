#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

#define SIZE 5
int* arr(int original[SIZE])
{
    int *array = malloc(sizeof(int) * SIZE);
    int size = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int found = 0;

        for (int j = 0; j < size; j++)
        {
            if (array[j] == original[i])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            array[size] = original[i];
            size++;
        }
    }
    return array;
}

int main(void)
{
    int original[SIZE] = {1, 1, 2, 2, 3};
    int *result = arr(original);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", result[i]);

    printf("\n");
    free(result);
}