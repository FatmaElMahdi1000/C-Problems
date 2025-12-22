#include"stdio.h"
#include"stdlib.h"
#include"math.h"

typedef struct coordinates
{
    int x;
    int y;
}
co;

float distance(co *p_point1, co *p_point2)
{
    float the_distance; 
    the_distance = sqrt(pow((p_point2 -> x - p_point1 -> x),2) + pow((p_point2 -> y - p_point1 -> y),2));
    return the_distance;
}

int main()
{
    co point1 = {3, 4};
    co *p_point1 = &point1;
    co point2 = {5, 6};
    co *p_point2 = &point2;
    printf("The distance = %f\n", distance(p_point1,p_point2));
}
