#include<stdio.h>

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    int result;
    printf("Enter a & b respectively: ");
    int input = scanf("%d %d", &a, &b); //scanf returns how many numbers it can take, we put %d it means "2" input 
    if (input !=  2) //if input of the scanf != 2(number of inputs it means something went off)
    {
        printf("ERROR: Invalid input!");
        return 1; //must add this to stop the program when invaild input is detected    
    }
    result = sum(a, b);
    printf("The sum: %d\n", result);
    return 0; //without return 0, program won't work
}