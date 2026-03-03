#include"stdio.h"

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    printf("Enter the first number: ");
    int a, b;
    int *p_a = &a;
    scanf("%d", &a);
    printf("Enter the first number: ");
    int *p_b = &b;
    scanf("%d", &b);
    printf("GCD: %d\n", gcd(a,b));
}