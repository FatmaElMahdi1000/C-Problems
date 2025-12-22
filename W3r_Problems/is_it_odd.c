#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"

bool odd_or_not(int *p_x )
{
    if(*p_x % 2 != 0)
    {
        return 1; //true
    }
    else
    {
        return 0; //false
    }
}

int main()
{
    int x; 
    int *p_x = &x;
    printf("Enter a number: ");
    scanf("%d", p_x);
    printf("(1 -> it's an Odd, 0 -> it's even): %d", odd_or_not(p_x));

}