#include"stdio.h"
#include"stdlib.h"

int main()
{
    for(int r = 1; r < 5; r++)
    {
        for(int c = 1;  c <= r; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}