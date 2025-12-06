#include"stdio.h"
int main()
{
    int n = 1;
    int total_rows = 4;
    for(int r = 1; r <= 4; r++ )
    {
        int spaces = total_rows - r;
        for(int s = 0; s < spaces; s++)
        {
            printf(" ");
        }
        for (int c = 1; c <= r; c++)
        {
            printf("%d ", n);
            n++;
        }

        printf("\n");
    }

}