#include"stdio.h"
#include"stdlib.h"

#define SIZE 5 //constant value

void leastANDsmallest(int *arr)
{

    for(int j = 0; j < SIZE; j++)
    {
        int count = 0; //reset count every iteration to get the count of 1 number.
        for (int k = 0; k < SIZE; k++)
        {
            if(arr[j] == arr[k])
            {
                count += 1;
            }
        }
        
        printf("Number {%d}, repeated: {%d}\n", arr[j], count);
    }

}

int main()
{
    //defining array size with malloc firt 
    int *arr = (int*) malloc(sizeof(int) * SIZE);
    for (int i = 0; i <= SIZE; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        printf("Number at idx[%d] = %d\n", i, arr[i]);
    }
    leastANDsmallest(arr);
    free(arr);
    arr = NULL;
    
}