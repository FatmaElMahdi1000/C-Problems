#include<stdio.h>
char *EqualOrNot(int *p_x, int *p_y)
{
    if (p_x == p_y)
    {
        printf("Both X and Y are equal!\n");
    }
    else
    {
        printf("Both X and Y are not equal!\n");
    }
    return 0; 
}

int main()
{
    char *result;
    int x; 
    int y;
    int *p_x = &x;
    int *p_y = &y;
    printf("Enter x: ");
    scanf("%d", &p_x);
    printf("Enter y: ");
    scanf("%d", &p_y);
    result = EqualOrNot(p_x, p_y);

}