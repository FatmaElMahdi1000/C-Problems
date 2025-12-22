#include"stdio.h"
#include"stdlib.h"
#include"math.h"

float employee_income(float *p_income)
{
    float tax;
    if(*p_income >= 5000)
    {
        //both income and the % must be of the same data type, float 
        tax = *p_income * 0.07; 
    }
    else
    {
        tax = 0;
    }
    return tax;
}
int main()
{
    float income;
    float *p_income = &income;
    //yearly income
    printf("Enter income: ");
    //scanf("%f", ...) → float*
    //scanf("%lf", ...) → double*
    scanf("%f", &income);
    float result = employee_income(p_income);
    printf("The yearly taxes = %.2f\n", result);
}
