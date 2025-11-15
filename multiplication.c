#include<stdio.h>

int sum = 0;

int a = 3;
int b = 4;
int i = 0;
int main()
{
    while (i < b)
    {
        sum += a;
        i += 1;
    }
    printf("The multiplication of a and b = %d", sum);
}