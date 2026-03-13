#include "stdio.h"
#include "math.h"
#include "stdbool.h"
int main()
{
    bool set_values = true;

    int arr[3] = {4, 5, 2};

    
    // int x = 4;
    //int y =  5;
    // int z = 2;
    int i = 0;
    
    int mn;
    int mx;
    while(i < 3)
    {
        if (set_values == true)
        {
            
           mn = arr[i];
           mx = arr[i];
           set_values = false;            
        }

        if (mx < arr[i])
        {
            mx = arr[i];
        }

        if(mn > arr[i])
        {
            mn = arr[i];
        }
        i+=1;
    }

    printf("MAX :  %d, MIN: %d\n", mx, mn);

}