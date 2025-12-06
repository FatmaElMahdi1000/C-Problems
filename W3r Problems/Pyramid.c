#include <stdio.h>

int main()
{
    int max = 7; // width of the line (must be odd)

    for(int r = 1; r <= 7; r += 2) // 1,3,5,7 stars (skipping iterations where stars are not aligned and working with 1, 2, 5m 7)
    {
        int spaces = (max - r) / 2;

        for(int s = 0; s < spaces; s++)
            printf(" ");

        for(int c = 0; c < r; c++)
            printf("*");

        printf("\n");
    }

    return 0;
}
