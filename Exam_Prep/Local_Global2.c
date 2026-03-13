#include "stdio.h"
#include "stdlib.h"

int x; //x = 0

int func(int x) //x = 4 function here gets a copy of x to work on but, not the orginal global one
{
    x = 10;
    return x;
}

int main()
{
    x = 4;
    // int *p_x = &x; //
    // func(*p_x); //pass by reference, original variable is modified.
    printf("%d\n", func(x));
    printf("%d\n", x);
}

