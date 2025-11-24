/**Multiplication */
#include"stdio.h"
int main()
{
    int i;

    printf("X");
    for (int k = 1; k <= 12;  k++)
    {
        printf("\t|%d|", k);
    }
    printf("\n");
    printf("-------------------------------------------------------------------------\n");
    for(i = 1; i <= 5; i++)
    {
        printf("%d|", i);
        for(int j = 1; j <= 12;  j++)
        {
            printf("\t|%d|", i*j);
        }
        printf("\n");
 
    }
    printf("\n");
}