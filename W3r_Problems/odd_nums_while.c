#include"stdio.h"
int main()
{
    int sum = 0; 
    int i = 1;
    while(i <= 5)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
        i += 1;
    }
    printf("%d", sum);
    return 0;
}