#include "stdio.h"


void fib(int a, int b, int z, int count)
{
    if(count > 14)
    {
        return; //stop the program
    }
    else
    { //b = 1 , a = 1;
        z = a + b; //z = 2
        printf("%d ", z); //2 
        a = b; //2
        b = z; //3  
        z = 0; //0 
        fib(a, b, z, count+1);
    }
}

int main()
{
    int a = 1;
    int b = 1;
    int z = 0;
    printf("%d %d %d ", 0, 1, 1);
    fib(a,b, z, 1);

}
///DOCTOR'S way:
// #include <stdio.h>

// int fib(int n)
// {
//     if (n == 0 || n == 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// int main()
// {
//     printf("fib(10) is %d", fib(10));
// }