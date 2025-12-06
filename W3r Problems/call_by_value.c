#include<stdio.h>

int sum(int x, int y)
{
    x = 5;
    y = 6;
    int sum = x + y;
    return sum;
}

int main()
{
    int x = 3; //we're passing the values of sum() fun to x, y in main and not changing the variables themselves 
    int y = 4;
    int result = sum(x, y);
    printf("%d\n", result);
    printf("%d\n", x);
    printf("%d\n", y);

}