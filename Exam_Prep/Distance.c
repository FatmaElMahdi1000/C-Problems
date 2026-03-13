#include "headers.h"
#include "stdio.h"
#include "stdlib.h"

float dist(float *p_x1, float *p_y1, float *p_x2, float *p_y2);

int main()
{
    float x1 = 3.4;
    float x2 = 3.4;
    float y1 = 5.5;
    float y2 = 5.7;

    float *p_x1 = &x1;
    float *p_x2  = &x2;
    float *p_y1 = &y1;
    float *p_y2 = &y2;

    printf("The Distance Between 2 Points: %f\n", dist(p_x1, p_y1, p_x2, p_y2));

}