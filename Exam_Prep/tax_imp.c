#include "stdio.h"
#include "stdlib.h"
#include "math.h"

double compute_tax(double *p_x)
{
    double tx;
    if(*p_x > 5000)
    {
        
        return 0.07 * (*p_x - 5000);
    }
    else
    {
        tx = 0.0;
        return tx;
    }

}