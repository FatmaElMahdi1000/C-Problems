#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long ull;
#define SIZE 30
ull *productFib(ull *prod) 
{

    ull *arr = (ull*) malloc(sizeof(ull) * SIZE);
    ull *result = (ull*) malloc(sizeof(ull) * SIZE);
    for(ull i = 0; i < SIZE; i++)
    {
        if (i == 0 || i == 1)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = arr[i-1] + arr[i - 2];
        }
    }

    for(ull k=0; k < SIZE; k++)
    {
        if(arr[k] * arr[k+1] == *prod)
        {
            printf("(%d, %d, %s)",arr[k], arr[k+1], "true");
        }
        else
        { 
            continue;
        }
    }
    return arr;
}

int main()
{
    ull product = 714;
    ull *prod = &product;
    ull *array  = productFib(prod);
    size_t size = sizeof(*array) / sizeof(array[0]);

}