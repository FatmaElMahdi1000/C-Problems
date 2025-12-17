#include"stdio.h"

int main()
{
    int x = 3; 
    int y = 4;
    int z = 5;
    int second;
    if (x >=  y && x <=  z || x >= z && x <= y) 
    {
        second = x;
    }
    else if (y >=  x && y <=  z || y <=  x && y >=  z)
    {
        second = y;
 
    }
    else 
    {
        second = z;
    }
    printf("2nd largest num is: %d\n", second);
    
}
