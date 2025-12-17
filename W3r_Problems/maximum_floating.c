#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"

double max(double *p_a, double *p_b, double *p_c)
{
    double max = *p_a;

    if(max < *p_b)
    {
        max = *p_b;
    }
    if(max < *p_c)
    {
        max = *p_c;
    }
    return max;
}

int main()
{
    double a, b, c;
    double *p_a = &a;
    double *p_b = &b;
    double *p_c = &c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    printf("Maximum Number: %f\n", max(p_a, p_b, p_c));

}
