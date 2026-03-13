#include"stdio.h"
#include"stdlib.h"
#include "stdbool.h"
//Solution with no pointer usage
// int main()
// {
//     int size;
//     printf("Input Total Number of elemet: ");
//     scanf("%d", &size);
//     int *arr = malloc(sizeof(int) * size);

//     for(int i=1; i<= size; i++)
//     {
//         printf("Number{%d}= ", i);
//         scanf("%d", &arr[i]);
//     }
//     bool specified = false;
//     int largest;
//     for(int k =1; k <= size; k++)
//     {
//         if (specified == false)
//         {
//             largest = arr[k];
//             specified = true;
//         }
//         else
//         {
//             if(largest < arr[k])
//             {
//                 largest = arr[k];
//             }
//         }
//     }
//     printf("The largest Number is  = %d\n", largest);

//     free(arr);

// }

//Solution with pointer usage
int main()
{
    int size;
    printf("Input Total Number of elemet: ");
    scanf("%d", &size);
    //typecasting malloc return to int as it returns by default "Void"
    int *arr = (int*) malloc(sizeof(int) * size);

    if (arr == NULL) {
        printf(" Allocation failed."); // If memory allocation fails
        exit(0);
    }
    
    for(int i=1; i<= size; i++)
    {
        printf("Number{%d}= ", i);
        scanf("%d", &arr[i]);
    }
    bool specified = false;
    int largest;

    int low_idx = 0;  //0
    int high_idx = size - 1; //4

    for(int k =1; k <= size; k++)
    {
        //Store the largest element in the first memory location
        if (*arr < *(arr+k))
        {
            *arr = *(arr+k);
        }
                
    }
    printf("The largest Number is  = %d\n", *arr);

    free(arr);

}