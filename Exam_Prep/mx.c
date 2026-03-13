#include "stdio.h"
#include "stdbool.h"

double mx(double x, double y, double z)
{
    bool set_value = true;
    int i = 0;
    double max;
    while(i <= 3)
    {
        if(set_value)
        {
            max = x;
            set_value = false;
        }
        if (max < y)
        {
            max = y;
        }
        
        if (max < z)
        {
            max = z;
        }
        i+= 1;
    }
    return max;
}

int main()
{
    double x = 2.2;
    double y = 7;
    double z = 4;
    printf("%lf\n", mx(x, y, z));

}