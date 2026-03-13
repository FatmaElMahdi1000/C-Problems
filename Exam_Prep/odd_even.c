#include "headers.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int x;
    int *p_x = &x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("1 if even, 0 if odd: RESULE IS: %d\n" , even_odd(p_x)); //this will print(1 if true(EVEN), 0(False) odd)

}