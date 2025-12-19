#include"stdio.h"
#include"stdlib.h"
#include"math.h" //it returns values at"Double" data type

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) 
{
    if( -50 <= a.x && a.x <50 && -50 <= a.y && a.y <50 && -50 <= b.x && b.x <50 &&-50 <= b.y && b.y <50)
    {
       return sqrt(pow((b.x-a.x), 2) + pow((b.y-a.y), 2));
    }
    else
    {
        printf("Error: coordinates out of range\n");
        return -1;
    }

}

int main()
{
    point a = {3, 4};
    point b = {5, 10};
    printf("The distance is: %f\n", distance_between_points(a, b));

}
//Another solution using hypot()built in function in math.h
// #include <math.h>

// typedef struct Point {
//     double x;
//     double y;
// } point;

// double distance_between_points(point a, point b)
// {
//   return hypot(a.x - b.x, a.y -b.y);
// }