#include"stdio.h"

int main()
{
    int sum_odd = 0;
    int sum_even = 0;
    int arr[10] = {1, 3, 10, 3, 4, 23, 5, 3, 9, 12}; 
    int m = 0;
    while (m < 10)
    {
        if(arr[m] % 2 != 0)
        {
            sum_odd += arr[m];
            
            
        }
        else
        {
            sum_even += arr[m];
        }
        m+= 1;
    }
    printf("sum of odds: %d\n", sum_odd);
    printf("sum of evens: %d\n", sum_even);
    return 0; //program ran successfully without runtime errors or problems.

}


