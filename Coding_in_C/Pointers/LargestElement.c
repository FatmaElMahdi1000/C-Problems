#include"stdio.h"
#include"stdlib.h"
#include "stdbool.h"

int main()
{
    int size;
    printf("Input Total Number of elemet: ");
    scanf("%d", &size);
    int *arr = malloc(sizeof(int) * size);

    for(int i=1; i<= size; i++)
    {
        printf("Number{%d}= ", i);
        scanf("%d", &arr[i]);
    }
    bool specified = false;
    int largest;
    for(int k =1; k <= size; k++)
    {
        if (specified == false)
        {
            largest = arr[k];
            specified = true;
        }
        else
        {
            if(largest < arr[k])
            {
                largest = arr[k];
            }
        }
    }
    printf("The largest Number is  = %d\n", largest);

    free(arr);

}