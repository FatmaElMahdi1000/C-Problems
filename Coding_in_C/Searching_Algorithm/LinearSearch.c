#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"


//Linear search is also called sequential search

void LinearSearch(int arr[], int target,int size)
{
    bool found = false;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            printf("the target %d is found! At index: %d\n", target, i);
            found = true;
            break;
        }
    }
    if(found == false)
    {
        printf("The target is not in the search interval/ List \n!");
    }

}

int main()
{
    int target = 13;
    int arr[] = {11, 34, 13, 4,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    LinearSearch(arr, target,size);
}