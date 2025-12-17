#include<stdio.h> //for input/output
#include<stdlib.h> //for memory allocation,dynamic/ calloc / malloc

void arr_checking(int *arr) //returning largest or smallest number so the int here for that purpose
{

    int n = 5; //size of the array 
    arr = (int*) malloc(sizeof(int)*n); //allocating dynamically space in the heap for the array
    for(int k = 0; k < n; k++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[k]);
    }
    for(int s = 0; s < n; s++)
    {
        if (s == 0)
        {
            printf("{%d", arr[s]);  // print each element
        }
        else if (s < n - 1)
        {
            printf(" ,%d", arr[s]);  // print each element
        }
        else
        {
            printf(" ,%d}", arr[s]);  // print each element
        }

    }
    printf("\n");  // newline after printing all elements

    int temp_smallest = arr[0];
    
    int temp_largest = arr[0];
    
    for(int i = 1; i < n; i++) //to check for the largest number 
    {
        if (temp_largest < arr[i])
        {
            temp_largest = arr[i];
        }
        if (temp_smallest > arr[i])
        {
            temp_smallest = arr[i];
        }
      
    }
    printf("Largest number is: %d, Smallest number is: %d\n", temp_largest, temp_smallest);
    free(arr);
    arr = NULL;

}

int main()
{
    int *arr;
    arr_checking(arr);
}
