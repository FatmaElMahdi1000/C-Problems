#include <stdio.h>
#include <stdlib.h>

int *pipe_fix(size_t sz_in, int input[sz_in], size_t *sz_out) 
{
    int start = input[0];
    int end   = input[sz_in - 1];

    *sz_out = end - start + 1;  // correct size

    int *arr = calloc(*sz_out, sizeof(int));  // allocate AFTER sz_out is known

    for (size_t i = 0; i < *sz_out; i++)
    {
        arr[i] = start + i;
    }

    return arr;
}

int main()
{
    int input[] = { 1, 2, 3, 5, 6, 8, 9 };
    size_t sz_in = sizeof(input) / sizeof(input[0]);

    size_t sz_out;
    int *array = pipe_fix(sz_in, input, &sz_out);

    for (size_t i = 0; i < sz_out; i++)
    {
        printf("%d ", array[i]);
    }

    free(array);
}
