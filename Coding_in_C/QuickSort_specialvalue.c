#include "stdio.h"
#include "math.h"
#include "stdbool.h"
#include "stdlib.h" //calloc malloc memory 
#include "stdbool.h" //calloc malloc memory 

void special_value(int *arr, int *p_n)  //*p_d divisor
{
    int q = 0;
    int *res = NULL;
    int z = 0;
    while(z+1 < *p_n)
    {
        if(arr[z] > arr[z+1])
        {
            int diff = arr[z]  - arr[z+1];
            res = realloc(res, sizeof(int) * (q+1));
            res[q] = diff;
            q++;
        }
        else
        {
            int diff = arr[z+1]  - arr[z];
            res = realloc(res, sizeof(int) * (q+1));
            res[q] = diff;
            q++;
        }
        z+=2;
    }

    int h = 0;
    int set_min = true;
    int min;
    while(h < q)
    {
        if (set_min == true)
        {
            min = res[h]; 
            set_min = false;
        }
        if(min > res[h])
        {
            min = res[h];
        }
        h++;
    }
    
    printf("Special Value is: %d\n", min);
    free(res);

}
//QUICK SORT ALGORITHM IN C
void quicksort(int *arr, int *p_n) //int m, add it for creating sublists of 2 elements, m: num of elements
{
    //base case
    if(*p_n < 2)
    {
        return;  
    }
    int *smaller = NULL;
    int *greater = NULL;
    int k = 0;
    int *p_k = &k;
    int o = 0;
    int *p_o = &o;
    
    int pivot = arr[0]; //choosing a pivot

    //looping throught the pivot, constructing smaller/greater nums lists
    for(int s = 1; s < *p_n; s++)
    {
        if(arr[s] > pivot)
        {
            greater = realloc(greater, sizeof(int) * (k+1)); //0 + 1 = 0
            greater[k] = arr[s];
            k+=1; 
        }
        else
        {
            smaller = realloc(smaller, sizeof(int) * (o+1));
            smaller[o] = arr[s];
            o+=1;
        }
    }
    quicksort(smaller, p_o);
    quicksort(greater, p_k);
     // Merge back into arr: smaller + pivot + greater
    
     int idx = 0;  
     for(int y = 0; y < o; y++)
     {
        arr[idx] = smaller[y];
        idx++;
     }

     arr[idx++] = pivot;

     for(int u = 0; u < k; u++)
     {
        arr[idx] = greater[u];
        idx++;
     }

     free(smaller);
     free(greater);

}
int main()
{
    int divisor = 2;
    int *p_d = &divisor;
    int n;
    int *p_n = &n;
    printf("Enter the number of the elements in an array: ");
    scanf("%d", &n);
    while(!(1 <= n && n <= pow(10,5) && n % 2 == 0))
    {
        printf("Enter the number of the elements in an array: ");
        scanf("%d", &n);
    }

    int *arr = (int*) malloc(sizeof(int) * n); //int * 5

    int i = 0; //arr index
    while(i < n) 
    {
        printf("Enter a number(%d): ", i);
        scanf("%d", &arr[i]);
        i += 1;
    }
    quicksort(arr, p_n);
     printf("Merged Array(Sorted in ascending order): ");
     for(int r = 0; r < *p_n; r++)
     {
        printf("%d ", arr[r]);
     }
     printf("\n");

     special_value(arr, p_n);

     free(arr);
}