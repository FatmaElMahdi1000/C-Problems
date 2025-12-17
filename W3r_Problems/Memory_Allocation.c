#include<stdio.h>
#include<stdlib.h> //for malloc and calloc 
//Allocating an array in the stack
// int main(void)
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("number at position: %d is %d\n", i, arr[i]);
//     };
// }
//Allocating an array in the heap
int main()
{
    int n;
    printf("Enter the number of bytes you need to allocate in memory: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int) * n); //int 4 bytes =  8bits
    int i = 0;
    int counter = 0;
    for (i= 0; i < n; i++)
    {
        arr[i] = 0;
        printf("%d", arr[i] + counter);
        counter ++;
        if (i < n-1)
        {
            printf(", ");
        }
        
    }
    free(arr);
    return 0;

}