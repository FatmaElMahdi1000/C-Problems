#include"stdio.h"
#include"stdlib.h"

//Time complexity (worst): Quadratic


//Why void?
// Because arrays are passed by reference-like behavior in C, so modifications inside the function affect the original array directly.
void BubbleSort(int arr[], int pass)
{
    for(int i = 0; i < pass; i++)
    {
        for(int j = 0; j <pass - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
}

int main ()
{
    int arr[] = {42,35,12,77,5,101};
    int pass = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, pass);
    for(int s = 0; s<pass; s++)
    {
        printf("%d ", arr[s]);
    }

}
