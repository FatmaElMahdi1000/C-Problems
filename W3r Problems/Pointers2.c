#include<stdio.h>
int sum(int *p_num1, int *p_num2)
{
    int sum = *p_num1 + *p_num2;
    return sum; ///Returning the sum (int sum ) to main for printing it
}



int main()
{
    int num1;
    int *p_num1 = &num1;
    int num2;
    int *p_num2 = &num2;
    printf("Enter the first number: ");
    scanf("%d", p_num1);
    printf("Enter the second number: ");
    scanf("%d", p_num2);

    int Result = sum(p_num1, p_num2); //check why we're printing without *
    printf("The Sum is: %d\n", Result);

}