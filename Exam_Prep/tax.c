#include "taxx.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

double compute_tax(double *p_x);
int main()
{
    double x = 7000;
    double *p_x = &x;
    printf("TAX: ");
    printf("%f\n", compute_tax(p_x));
}