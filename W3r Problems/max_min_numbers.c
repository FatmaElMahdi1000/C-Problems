#include"stdio.h"

int main()
{
    int set_values = 1; //true 
    int num;
    int max;
    int min;
    int i = 0;
    while(i < 3)
    {
        printf("Enter a number ");
        scanf("%d", &num);
        if (set_values == 1)
        {
            max = num;
            min = num;
            set_values = 0; //False
        }
        if (max < num)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    i += 1;

    }
    printf("Min number: %d\n", min);
    printf("Max number: %d\n", max);

}