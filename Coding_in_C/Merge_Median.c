//Leetcode problem:     Median of 2 sorted arrays 
#include"stdio.h"
#include"stdlib.h" //for quick sort //malloc , calloc 

//comparator func 

#define SIZE 5 //Macro 
#define SIZE2 10
int comparator(const void *a, const void *b)
{
    return *(int*) a - *(int*) b; //casting to int to check if they're equal, a greater than b or the vice versa
}
//Getting the Median function


float median(int *mer_arr)
{
    float med;
    //The modulus operator % only works with integers in C.
    if ( SIZE2 % 2 == 0) //10 % 2 = 0 then 
    {
        int idx = SIZE2 / 2; //5

        med = (float)(mer_arr[idx-1] + mer_arr[idx]) / 2.0;  

    }
    if(SIZE2 % 2 != 0)
    {
        int idx = SIZE2 / 2; //5 
        med = mer_arr[idx];
    }
    return med;

}

int* merged(int arr1[SIZE], int arr2[SIZE])
{
    int *arr3 = (int*) malloc(sizeof(int) * (SIZE*2));

    if(!arr3)
    {
        return NULL;
    }

    for(int k =0; k <  SIZE; k++)
    {
        arr3[k] = arr1[k];   
    }

    int l = 0;
    for(int s = SIZE; s <  SIZE2; s++) //5 6 7 8 9 
    {
        arr3[s] = arr2[l];  //s=6 --> 10
        l++;
    }

    qsort(arr3,SIZE2,sizeof(arr3[0]),comparator);

    return arr3;


}

int main()
{
    int arr1[SIZE] = {3, 4, 1, 2, 4};
    int arr2[SIZE] = {3, 6, 1, 2, 2};

    qsort(arr1,SIZE,sizeof(arr1[0]),comparator);
    qsort(arr2,SIZE,sizeof(arr2[0]),comparator);

    printf("List Number1: ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
    printf("List Number2: ");
    for(int j = 0; j < SIZE; j++)
    {
        printf("%d ", arr2[j]);
    }
    printf("\n");
    // merged(arr1[SIZE], arr2[SIZE]);

    int *mer_arr=  merged(arr1, arr2);

    printf("The Merged List: ");
    for(int o= 0; o < (SIZE*2); o++)
    {
        printf("%d ", mer_arr[o]);

    }
    printf("\n");

    float the_median = median(mer_arr);

    printf("The Median of the merged list = %f\n", the_median);

    printf("\n");
    free(mer_arr);
}