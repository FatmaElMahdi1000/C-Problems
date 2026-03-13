#include"stdio.h"
#include"stdlib.h"
#include"math.h"

int x = 0; //4
void f1()
{
    x++;
}

void f2()
{
    x += 4; //x = 4
    f1(); //5 
}
int main()
{
    f2();  //4 //4+1 
    printf("f1: %d\n", x);
}