#include"stdio.h" 
#include"stdlib.h"
#include"math.h"

void nearest(double *p_num)
{
    int nearest_greater = ceil(*p_num); //round up 
    int nearest_smaller = floor(*p_num); //round down 
    printf("The nearest_greater: %d\n", nearest_greater);
    printf("The nearest_smaller: %d\n", nearest_smaller);
}

int main()
{
    double num;
    double *p_num = &num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    nearest(p_num);
}