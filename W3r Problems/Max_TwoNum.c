#include<stdio.h>
int max(int *p_num1, int *p_num2)
{
    if (*p_num1 > *p_num2) //derferencing, we must use the asterisk to get the value inside the variable*p_num2
    {
        printf("The Max number is: %d", *p_num1);
        return *p_num1; //returning the pointer to main for execution 

    }
    else
    {
        printf("The Max number is: %d", *p_num2);
        return *p_num2; //returning the pointer to main for execution 
    }
}

int main()
{
    int num1;
    int *p_num1 = &num1;
    printf("Enter the first num: ");
    scanf("%d",&num1);
    int num2;
    int *p_num2 = &num2;
    printf("Enter the second num: ");
    scanf("%d",&num2);
    int result = max(&num1, &num2); //we're passing addressed to the function as the original function expects *p_num pointer to an address and *p_num1 = &num1

}