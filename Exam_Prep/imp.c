#include "headers.h"
#include "stdio.h"
#include "stdio.h"
#include "stdbool.h"
#include "math.h"
bool even_odd(int *p_x)
{
    if (*p_x % 2 == 0)
    {
        return true; // if 2 != 0 it will return automatically 0 that represent odd.
    }
    else
    {
        return false;
    }

}


float dist(float *p_x1, float *p_y1, float *p_x2, float *p_y2)
{
    return sqrt(pow(*p_x1 - *p_x2,2) + pow(*p_x2 - *p_y2,2));
}