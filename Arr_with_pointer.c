#include"stdio.h"
#include"string.h"

#define SIZE 5

void printing_Arr(int *p_arr, int *p_size)
{
    printf("{");
    for (int j = 0; j < *p_size; j++)   //* dereferncing the value with asterisk to get the value itself, meaning putting *p_size
    {
        if ( j == (*p_size - 1)) //last element 5 - 1 = 4 //at position 4 
        {
            printf("%d", p_arr[j]); 
        }
        else
        {
            printf("%d, ", p_arr[j]); 
        }
    }
    printf("}");
    printf("\n");
}

int main()
{
    int arr[SIZE];
    int size = SIZE;
    int *p_arr = arr; // arr already points to the first element, so no & in this case only.
    int *p_size = &size;

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter an Element = ");
        scanf("%d", &arr[i]);
    }
    printing_Arr(p_arr, p_size);
    return 0;    
}