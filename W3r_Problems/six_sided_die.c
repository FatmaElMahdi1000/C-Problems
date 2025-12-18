#include"stdio.h"
#include"stdlib.h"
#include"time.h" //for srand


int roll(int *p_num)
{

    srand(time(NULL)); //seeds srand so each run is different 
    int counter = 0; //for creating new line
    for(int i = 0; i <20; i++)
    {
        int result = (rand() % *p_num) + 1;   //rand() % num, generate number from 0 to num-1, looks like range
        printf("%d ", result);
        counter++; //counter = counter + 1
        if (counter % 5 == 0) //if divisible by 5 create a new line 
        {
            printf("\n");
        }
    }
    return 0; //success
}

int main()
{
    int num= 6;
    int *p_num = &num;
    int r = roll(p_num);
}
