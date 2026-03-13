#include"stdio.h"

#define size 100
int main()
{
    int sum_odd = 0;
    int sum_even = 0;
    //creating an array of 100 number.
    int arr[size];
    for(int i = 0; i< 100; i++)
    {
        arr[i] = i+1;
    }

    int m = 0;
    while (m < size)
    {
        if(arr[m] % 2 != 0)
        {
            //calculating only odds in the array
            sum_odd += arr[m];
        }
        else
        {
            //calculating only evens in the array
            sum_even += arr[m];
        }
        m+= 1;
    }
    printf("sum of odds: %d\n", sum_odd);
    printf("sum of evens: %d\n", sum_even);
    return 0; //program ran successfully without runtime errors or problems.

}
