#include"stdio.h"
#include"stdlib.h"
#include"time.h"

int roll(int *p_num)
{
    srand(time(NULL)); //seed the generating of different numbers 
    int frequency_1 = 0;
    int frequency_2 = 0;
    int frequency_3 = 0;
    int frequency_4 = 0;
    int frequency_5 = 0;
    int frequency_6 = 0;

    for (int i = 0; i < 1000; i++)
    {
        int r = rand() % *p_num + 1;
        switch(r)
        {
            case 1:
                ++frequency_1;
                break;
            case 2:
                ++frequency_2;
            case 3:
                ++frequency_3;
            case 4:
                ++frequency_4;
            case 5:
                ++frequency_3;
            case 6:
                ++frequency_6;
        }
    }
    printf("FACE\t\tFrequency\n");
    for(int j = 1; j < 7; j++)
    {
        switch(j)
        {
            case 1:
                printf("%d\t\t%d\n",j, frequency_1);
                break;
            case 2:
                printf("%d\t\t%d\n",j, frequency_2);
                break;
            case 3:
                printf("%d\t\t%d\n",j, frequency_3);
                break;
            case 4:
                printf("%d\t\t%d\n",j, frequency_4);
                break;
            case 5:
                printf("%d\t\t%d\n",j, frequency_5);
                break;
            case 6:
                printf("%d\t\t%d\n",j, frequency_6);
                break;
        }
    }
    return 0;
}

int main()
{
    int num = 6;
    int *p_num = &num;
    roll(p_num);
}