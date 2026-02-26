#include"stdio.h"
#include"stdio.h"


//A pointer references a location in memory. 
//Obtaining the value stored at that location is known as dereferencing the pointer.

int main()
{
    //pointers with integer
    int a = 2;
    int *p_a = &a;
    printf("a value = %d\n",*p_a);
    printf("a address = %p\n",p_a);
    printf("a address = %p\n",&a);
    //pointers with arrays: 
    int arr[5] = {2,3,5,2,3};
    int *p_arr = arr; //we don't use ambersand with arrays
    printf("Array = %d\n", *p_arr); //this is going to only print the first value in the array.


}
