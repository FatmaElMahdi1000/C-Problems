#include"stdio.h"
#include"stdlib.h"

int main()
{
    int arr[3] = {1, 4, 6};
    int *p_element = arr; //pointer to only element 1 in the array
    printf("Element 1's value = %d \n", *p_element);
    p_element++; //increases by 4 bytes(in memory) to occupy and denote to the 2nd integer.
    printf("Element 2's value = %d \n", *p_element);
    
}