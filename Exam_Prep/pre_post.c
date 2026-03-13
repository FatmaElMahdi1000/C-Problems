#include "stdio.h"

int main()
{

    int c = 4;

    // ++c; //c = c + 1;
    // printf("%d\n", c);

    // int z = 4 + (++c); //variable change first, then we do the calculations c = 5, then z = 4+5 = 10 
    // printf("z= %d, c = %d\n", z ,c); //output : z = 9, c = 5
    int y = 4 + (c++); // 4 + 4(no change in c ). c will change after y is calculated , C = 5;
    printf("y= %d, c = %d\n", y ,c);
    

}