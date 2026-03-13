#include"headerr.h"
#include "stdio.h"
#include "stdlib.h"


float lengthFC(float lft);

int main()
{
    float feet_num = 5;
    //we'll pass by value
    float result = lengthFC(feet_num);
    printf("Length in Centimeters = %f\n", result);
}