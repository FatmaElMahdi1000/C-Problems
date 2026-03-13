#include "stdio.h"
#include "ctype.h"
int main()
{
    int i = 1;
    int res;
    int fail = 0;
    int pass = 0;
    while (i <= 10)
    {   
        printf("Enter 1 or 2 ONLY: ");
        scanf("%d", &res);
        if(res == 1)
        {
            pass += 1;
        }
        else if(res == 0)
        {
            fail += 1;
        }
        else
        {
            i -= 1; //substract a loop to make up for the unused one when the entered number was neither 1 not 0
        }
        i++;
    }
    printf("PASS: %d, FAIL: %d\n", pass, fail);
    if(pass > 8)
    {
        printf("Raise a tuition\n");
    }
    else
    {
        printf("NO TUITION\n");
    }

}