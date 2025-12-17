#include "stdio.h"
#include "string.h"

#define SIZE 4
int main()
{
    int arr[SIZE];

    for (int i = 0; i<SIZE; i++)
    {
        int tmp;
        int duplicate;
        do 
        {
            duplicate = 0;
            printf("Enter a number: ");
            scanf("%d", &tmp);
            for(int s = 0; s < i; s++)
            {
                if(arr[s] == tmp)
                {
                    duplicate = 1;
                    printf("Duplicate! Try again.\n");
                    break;
                }
            }

        }
        while(duplicate); //means as long as duplicate has a value(no matter what it's, expect defined else, in the condition)
        arr[i] = tmp;
    }
    printf("\n");
    printf("The Array: ");
    
    int temp = arr[0];
    
    for(int k = 0; k < SIZE -1; k++)
    {
        if (temp > arr[k])
        {
            temp = arr[k];
        }

        if (temp > arr[k+1]) //in the first iteration temp does not have a value to check
        {
            temp = arr[k+1];
        }

    }
    for(int j = 0; j < SIZE ; j++)
    {
        printf("%d ", arr[j]);
    }
    
    printf("The smallest number : %d ", temp);
    printf("\n");
}
