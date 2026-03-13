#include"stdio.h"
#include"math.h"
#define SIZE 5


int main()
{
    int ages[SIZE] = {29, 27, 32, 31, 50};
    float sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += ages[i];
    }
    float avg_val = sum / SIZE; //better to add sum as float as the division will cut the decimal part if sum is int.
    printf("SUM: %f, AVG: %f\n", sum,avg_val);

}