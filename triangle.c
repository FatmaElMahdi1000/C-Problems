#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if( a + c > b || a + b > c || b + c > a)
    {
        printf("These are sides of a triangle!");
    }
    else
    {
        printf("this is not a triangle!");
    }
    return 0;
}