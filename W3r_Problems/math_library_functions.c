#include"stdio.h"
#include"stdlib.h"
//math lib returns a double 
#include"math.h" 
int main()
{
    // double x = -3;
    // //absolute value
    // printf("%f", fabs(x)); 
    double x = 8;
    //log2(8) = 3; as 2^3 = 8, we can change the base beside log to be log2 / log10()/log() only.
    printf("%f \n", log2(x));

}