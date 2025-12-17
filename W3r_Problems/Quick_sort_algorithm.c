#include"stdio.h"
#include"string.h"
#include"stdlib.h"

//solving it with Quick sort algorithm.
#define SIZE 3

//Quicksort function
void QuickSort(int arr[], int a)
{
    int pivot = arr[0];
    int small[SIZE];
    int large[SIZE];
    int s = 0; //idx for
    int l = 0;
    if(a <= 1) //base case
    {
        return;
    }
    for (int j = 1; j < a; j++)
    {
        if (arr[j] < pivot)
        {
            small[s] = arr[j];
            s += 1; //increment to the next position/ idx after storing.
        }
        else
        {
            large[l] = arr[j];
            l += 1;
        }
    }
    QuickSort(small, s);
    QuickSort(large, l);
    // Merge small + pivot + large back into original array
 
    int n = 0;
    for(int f = 0; f < s; f++) //f for iteration, s for the small array size, 
    {
        arr[n] = small[f];
        n++;
        
    }

    arr[n] = pivot;
    n += 1;

    for(int h = 0; h < l; h++)
    {
        arr[n] = large[h];
        n += 1;
    }

}

int main()
{
    int arr[SIZE];

    int i = 0;
    while(i <SIZE)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        i++;
    }
    
    printf("Before sorting: \n");
    for (int k = 0; k < SIZE; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

    QuickSort(arr, SIZE);

    printf("After sorting: \n");
    for (int g = 0; g < SIZE; g++)
    {
        printf("%d ", arr[g]);
        
    }
    printf("\n");

    printf("The 2nd largest num is: %d", arr[SIZE - 2]);

}