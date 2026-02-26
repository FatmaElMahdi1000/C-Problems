#include "stdio.h"
#include "stdlib.h"

int main()
{

    //not defining size, leaving [] empty
    int arr[] = {2, 3, 5, 1, 3};
    size_t length = sizeof(arr) / sizeof(int);
    printf("The Array Size = %d \n", length);
    //pointer to the first element in the arr
    int *p_arr1 = arr; //no need to put the ambersand since this is an array
    printf("The address of the 1st element = %d \nThe value = %d\n", p_arr1, *p_arr1);

    for (int i = 0; i < length; i++)
    {
        printf("The Address Of Element #%d @Address: %d , Value is: %d\n", i, p_arr1, *p_arr1);
        p_arr1++;
    }

    //OUTPUT: 
    //notice Address increases by 4 bytes (an increase of memory size of each element)
    // The Address Of Element #0 @Address: 652213440 , Value is: 2
    // The Address Of Element #1 @Address: 652213444 , Value is: 3
    // The Address Of Element #2 @Address: 652213448 , Value is: 5
    // The Address Of Element #3 @Address: 652213452 , Value is: 1
    // The Address Of Element #4 @Address: 652213456 , Value is: 3

}