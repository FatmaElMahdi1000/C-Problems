#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"

//REVIEW THE CODE
//Worst Case Scenario: Time complexity: O(n^2), named"Quadratic"

void SelectionSort(int arr[], int size)
{
    bool found = false;
    int min_Val;
    int min_idx;
    int j = 0;
    for(int i = 0; i < size; i++)
    {
        min_idx = i;

        for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        if(min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
 
}

int main()
{                                 //3 //4 
    int arr[] = {12, 101, 50, 12, 200, 1};
    int size = sizeof(arr) / sizeof(arr[0]); //Array length
    SelectionSort(arr, size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

}