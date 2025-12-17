#include<stdio.h>
#include<stdlib.h>

float average(int *arr, float size) //return float as Average value might be a float.
{
    int sum = 0;
    for (int k = 0; k < size; k++)
    {
        sum += arr[k];
    }
    float average = sum/size;
    return average;

}

int Smallest(int *arr, int size) //passing array directly here refers to the first pointer arr[0], pointing out to the entire array as well
{
    int smallest_num = arr[0];
    for(int j = 1; j < size; j++)
    {
        if(smallest_num > arr[j])
        {
            smallest_num = arr[j];
        }
 
    }
    return smallest_num;

}

int main()
{
    int size = 3;
    //allocating memory for our array using malloc (must be freed)
    int *arr = (int*) malloc(sizeof(int) * size); //type casting malloc return value from pointer to pointer to intgers
    for(int i = 0; i <size; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    int smallest = Smallest(arr, size);
    printf("The smallest number: %d\n", smallest);
    float av = average(arr, size);
    printf("The average: %.2f\n", av);
    free(arr);
    arr = NULL;
    return 0;

}