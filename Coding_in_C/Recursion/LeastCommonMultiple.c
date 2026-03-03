#include"stdio.h"
#include"stdlib.h"

int LCM_recursion( int *p_a, int *p_b, int current)
{
    if(current % *p_a == 0 && current % *p_b == 0)
    {
        return current;
    }
    else
    {
        return LCM_recursion(p_a, p_b, current+1);
    }

}
int main()
{
    int size = 5;
    int a;
    int b;
    int *p_a = &a;
    int *p_b = &b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    

    int start;
    if(*p_a > *p_b)
    {
        start = *p_a;
    }
    else
    {
        start = *p_b;
    }

    printf("The Least Common Multiples  = %d\n",LCM_recursion(p_a, p_b,start));
}