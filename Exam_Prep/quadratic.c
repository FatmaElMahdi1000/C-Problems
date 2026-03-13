#include"stdio.h"
#include"stdlib.h"
#include "math.h"

int main()
{
    float a = 1, b = -3, c = 2; 
    float d = sqrt(pow(b, 2) - (4*a*c));
    float x1 = (-b - d) / (2*a);  
    float x2 = (-b + d) / (2*a);

    printf("ROOTS ARE X1 = %f, X2 = %f\n", x1, x2);
}