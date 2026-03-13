#include "func.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int num_ops(double *p_x);

int main()
{
    double x = 3.5;
    double *p_x = &x;
    num_ops(p_x);
}