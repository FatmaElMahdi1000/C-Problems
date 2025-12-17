#include"stdio.h"

int main()
{
    int decision;
    printf("Enter 0 or 1: ");
    scanf("%d", &decision);
    int num = 2;

    while(decision == 0)
    {
        int multiple = num * 2;
        num = multiple;
        printf("Multiple of 2 so far:%d\n", multiple );
        printf("Enter 0 or 1: ");
        scanf("%d", &decision);
    }
    return 0;

}