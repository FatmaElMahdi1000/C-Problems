#include"stdio.h"

int main()
{
    int sum = 0;
    int arr[10] = {1, 3, 10, 3, 4, 23, 5, 3, 9, 12}; 
    int m = 0;
    while (m < 10)
    {
        if(arr[m] % 2 != 0)
        {
            sum += arr[m];
            
        }
        m+= 1;
    }
    printf("the sum is: %d\n", sum);
    return 0; //program ran successfully without runtime errors or problems.

}


