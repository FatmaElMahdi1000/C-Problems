#include<stdio.h>
#include<stdlib.h> //for malloc and calloc

//function to get me the average
int average(int *p_arr, int size)
{
    int sum = 0;

    for (int k = 0; k < size; k++)
    {
        sum += p_arr[k];
    }
    int average = sum/size;
    return average;
}

//function to get me the largest number_ allocating memory to the stack (fast, cleaned up automatically no need to free it)
int largest(int *p_arr, int size)
{
    int largest = p_arr[0];
    for (int j = 0; j < size; j++)
    {
        if (largest < p_arr[j])
        {
           largest =  p_arr[j];
        }
    }
    return largest;
}

int main()
{
    int arr[3];
    int *p_arr = &arr[0]; //pointer to the first location is referring also to the entire array
    for(int i = 0; i < 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    int largest_num  = largest(p_arr, 3);
    printf("The largest number is: %d\n", largest_num);
    int avg = average(p_arr, 3);
    printf("The average is: %d\n", avg);
}