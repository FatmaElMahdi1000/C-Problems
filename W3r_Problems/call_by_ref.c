#include <stdio.h>
int sum(int *p_x, int *p_y)
{

    int Result = *p_x + *p_y; //dereferences the pointer — gives you the value at that address
    return Result;
}

int main()
{
    int x = 3;
    int y = 4;
    int *p_x = &x; //Pointer is a variable that holds an address of another variable
    int *p_y = &y;
    int Result = sum(p_x,p_y);  //call by reference, the func must take the addresses as parameters P_x stores the address.
    printf("%d\n", Result);

}