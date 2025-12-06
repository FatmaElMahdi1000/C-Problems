#include<stdio.h>

char *shape(char hash)
{
    int i;
    int j;
    for (i = 0; i < 5; i++)
    {
        printf("%c", hash);
    }
    printf("\n");
    for (j=0; j < 6; j++)
    {
        if (j == 2)
        {
            int k; 
            for (k = 0; k < 3; k++)
            {
                printf("%c", hash);
            }
        }
        printf("%c\n", hash);
    }

}

int main()
{
    char hash= '#';
    shape(hash);
    return 0;

}