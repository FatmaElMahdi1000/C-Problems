#include"stdio.h"
#include"math.h"

double cube(int *p_a)
{
    return pow(*p_a, 3);
}
int main()
{
    int a;
    int *p_a = &a;
    for( a = 1; a<= 10; a++)
    {
        printf("%.0f ", cube(p_a));
    }
    printf("\n");

}