#include"stdio.h"
#include"stdlib.h"

int main()
{
    int a[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *x = a;
    int *y = &a[0];
    int *z = &a[2]; //element #3
    int *q = &a[3]; //element #4  
    printf("The first element in the array: way1: %d\nway2: %d\n", *x, *y);
    printf("Third element =  %d\nForth element: %d\n", *z, *q);

}