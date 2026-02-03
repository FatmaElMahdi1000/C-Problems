#include"stdio.h"
#include"stdlib.h"
#include"string.h"

#define SIZE 5 //buffer
float *average(int *arr, int *p_size)
{
    float *avg_arr = (float*) malloc(sizeof(float)*(*p_size)); //actual size
    
    for(int i = 0; i <*p_size - 1; i++)
    {
        avg_arr[i] = (float)(arr[i] + arr[i+1])/2;    ///check
    }
    return avg_arr;
}
int main()
{
    int arr[SIZE] = {1,3,4,5,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *p_size = &size;
    average(arr, p_size);
    float *averg = average(arr, p_size);
    for (int s = 0;  s < size-1; s++)
    {
        printf("%.1f ", averg[s]);
    }
    free(averg);
    averg = NULL; //returning the control of this memory we previously allocated in the heap to the OS.

}