#include"stdio.h"
#include"stdlib.h"

int main()
{
    int counter = 5;
    // Pre-increment
    int a = ++counter; //counter = counter +1 first = 6 and then a becomes 6 
    printf("counter: %d , a: %d \n", counter,  a );

}

// int main()
// {
//     int counter = 5;

//     // Post-increment
//     int b = counter++;  //like saying b = counter = 5, then in a different line; counter = counter + 1 = 6
//     printf("counter: %d , b: %d \n", counter,  b );

// }