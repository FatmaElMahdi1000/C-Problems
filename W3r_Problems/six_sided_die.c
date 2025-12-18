#include"stdio.h"
#include"stdlib.h"
#include"time.h" //for srand


int roll(int *p_num)
{
    srand(time(NULL)); //seeds srand so each run is different 
    int result = (rand() % *p_num) + 1;   //rand() % num, generate number from 0 to num-1, looks like range
    return result;
}

int main()
{
    int num= 6;
    int *p_num = &num;
    printf("the die output: %d\n", roll(p_num));
}
