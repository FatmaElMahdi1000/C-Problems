#include"stdio.h"
#include"string.h"
int main()
{
    int n = 1;
    for(int r = 1; r <= 4; r++)
    {
        for(int c = 1; c <= r; c++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
}