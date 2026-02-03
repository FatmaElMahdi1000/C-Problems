#include"stdio.h"
int square(int a)
{
    return a * a;
}

int main()
{
    int a;

    for(int a = 1; a <10; a++)
    {
        printf("%d ", square(a));
    }
    printf("\n");
}