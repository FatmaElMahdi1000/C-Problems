#include"stdio.h"
#include"string.h"

int main()
{
    int x;
    int y;
    int z;

    printf("Enter 3 numbers:\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("Z: ");
    scanf("%d", &z);


    if(x > y && x > z)
    {
        if (z > y)
        {
            printf("The 2nd Largest number is: %d\n", z);
        }
        else
        {
            printf("The 2nd Largest number is: %d\n", y);
        }
    }
    else if(y > x && y > z)
    {
        if (x > z)
        {
            printf("The 2nd Largest number is: %d\n", x);
        }
        else
        {
            printf("The 2nd Largest number is: %d\n", z);
        }
    }
    else if (z > x && z > y)
    {
        if (x > y)
        {
            printf("The 2nd Largest number is: %d\n", x);
        }
        else
        {
            printf("The 2nd Largest number is: %d\n", y);
        }
        
    }

}