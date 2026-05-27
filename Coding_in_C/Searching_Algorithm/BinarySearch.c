#include"stdio.h"
#include"stdlib.h"
//Sorting with the bubble sort then searching with the Binary search 

//Repeatedly splitting the search interval in a half till we find the target in one of the intervals, then stop.
void BinarySearch(int arr[], int pass, int target)
{
    
    int high_idx = pass-1;
    int low_idx = 0;

    while(low_idx <= high_idx)
    {
        //uses integer division.That means any decimal part gets discarded (truncated).
        int mid_idx = (high_idx+low_idx) / 2; //5/2 = 2.5, since the result will be int and the operands are also int, the decimal part will get truncated
        if(target == arr[mid_idx])
        {
            printf("The Target is found at index: %d\n", mid_idx);
            break;
        }
        else if(target > arr[mid_idx])
        {
            low_idx = mid_idx+1;

        }
        else //(target < arr[mid_idx])
        {
            high_idx = mid_idx-1;
            
        }


    }

}


void BubbleSort(int arr[], int pass)
{
    for(int i = 0; i <pass ; i++)
    {
        for(int j = 0; j <pass - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

}

int main()
{
    int target = 15;
    int arr[] = {200, 1, 15, 3, 201, 4};
    int pass = sizeof(arr)/ sizeof(arr[0]);
    BubbleSort(arr, pass);
    for(int i= 0;i <pass; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    BinarySearch( arr,   pass,   target);

}