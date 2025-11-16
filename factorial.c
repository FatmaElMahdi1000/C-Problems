#include"stdio.h"

int fact(int *p_num)
{
    int product = 1;
    for(int i = 1; i <= *p_num; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int num;
    int *p_num = &num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = fact(p_num);
    printf("Factorial : %d", factorial);
}