#include"stdio.h"
#include"stdlib.h" //malloc / calloc

#define SIZE 5
int main()
{
    //storing the arrays in the heap 
    int *array1 = (int*) malloc(SIZE * sizeof(int)); 
    int *array2 = (int*) malloc(SIZE * sizeof(int));
    int *intersection = (int*) malloc(SIZE * sizeof(int));
    int i = 0;

    while (i < SIZE)
    {
        printf("Enter a number: ");
        scanf("%d", &array1[i]);

        while(!(1<= array1[i] && array1[i] <= 100))
        {
            printf("Invalid Value! Enter the number again: ");
            scanf("%d", &array1[i]);
        }
        i += 1;
    }
    int j = 0;
    while (j < SIZE)
    {
        printf("Enter a number: ");
        scanf("%d", &array2[j]);
        while(!(1<= array2[j] && array2[j] <= 100))
        {
            printf("Invalid Value! Enter the number again: ");
            scanf("%d", &array2[j]);
        }
        j += 1;
    }

    printf("Array 1: ");
    for(int s = 0; s < SIZE; s++)
    {
        printf("%d ", array1[s]);
    }
    
    printf("\n");
    printf("Array 2: ");
    for(int n = 0; n < SIZE; n++)
    {
        printf("%d ", array2[n]);
    }

    int already_there = 0;
    int k = 0; //index for intersection array
    //intersections between arrays
    for(int s = 0; s <SIZE; s++)
    {
        for(int n = 0; n <SIZE; n++)
        {
            if (array1[s] == array2[n])
            {
                int already_there = 0;
                for(int f=0; f<SIZE; f++)
                {
                    if (intersection[f] == array1[s])
                    {
                      already_there = 1;
                      break;  
                    }
                }
                if(!already_there) //not inverts the value to 1
                {
                    intersection[k] = array1[s];
                    k++;
                }

            }
        }
    }
    printf("\n");
    printf("intersection result\n");
    // simple bubble sort on intersection array

    int temp;
    for(int a = 0; a <k; a++) //less than k as we might store fewer elements in the array
    {
        if (intersection[a] > intersection[a+1])
        {
            temp = intersection[a];
            intersection[a] = intersection[a+1];
            intersection[a+1] = temp;
        }
        printf("%d ", intersection[a]);
    }

    free(array1);
    free(array2);
    array1 = NULL;
    array2 = NULL;
}