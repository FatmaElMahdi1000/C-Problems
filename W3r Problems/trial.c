#include"stdio.h"

int main()
{
    int set_variables = 0;
    int num;
    int i = 1;
    int max;
    int min;
    printf("Enter a num: ");
    scanf("%d", &num);
    while (set_variables == 0)
    {
        max = num;
        min = num;
        set_variables = 1;
    }

    while(i <= 2)
    {
        printf("Enter a num: ");
        scanf("%d", &num);
        if(max < num)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
        i+= 1;
    }
    printf("The max: %d\n", max);
    printf("The min: %d\n", min);
    return 0;
}