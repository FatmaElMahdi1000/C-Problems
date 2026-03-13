#include "stdio.h"
#include "math.h"

double abss(double x)
{
    int y = fabs(x);
    return y;
}
int main()
{
    double x = -3;
    printf("%lf\n", abss(x));
}