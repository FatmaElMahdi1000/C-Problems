#include<stdio.h>


int sum(int *p_num1, int *p_num2)
{
    int sum = *p_num1 + *p_num2;
    return sum; //returning sum to main
    
}

int main()
{
    int num1 = 3;
    int *p_num1 = &num1;

    int num2 = 4;
    int *p_num2 = &num2;

    int SumResult = sum(p_num1, p_num2);
    printf("The sum is = %d ", SumResult);
}