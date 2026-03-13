#include "stdio.h"
#include "stdlib.h"

#include "math.h"

int x; //8
//pass by value a global variable.
void func(int *p_x)
{
    printf("%d\n", *p_x); //4 
    *p_x += 4;
}
int main()
{
    x = 4;
    int *p_x = &x;
    func(p_x); //4  
    printf("%d\n", x);
}