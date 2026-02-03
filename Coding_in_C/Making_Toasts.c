#include"stdio.h"
#include"stdlib.h"
#include"time.h"

short six_toast(short num) 

{
    int r;
    int toasts = 6;
    if(num > toasts)
    {
        r = num - toasts; //12 - 6 = 6 
    }
    else
    {
        r = toasts - num;
    }
    return r;
}

int main()
{

    srand(time(NULL));
    short num = rand() % 11; //remainder will be less than the divisor always, divisor here = 11, then remainder will be < 11
    short result = six_toast(num);
    printf("%d --> %d\n", num,result);
}