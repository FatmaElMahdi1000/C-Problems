#include"func.h"
#include"stdio.h"
#include"stdlib.h"
#include"math.h"

int num_ops(double *p_x)
{
    int greater = ceil(*p_x);
    int smaller = floor(*p_x);
    printf("Greater: %d , Smaller: %d\n", greater, smaller);
    return 0; //ran successfully
}