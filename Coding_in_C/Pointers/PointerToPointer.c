#include"stdio.h"
#include"stdlib.h"

int main()
{
    int p = 3;
    int *p_p = &p; //pointer of p
    //initializing a pointer that store another pointer that store the address of p
    int **x = &p_p; //x pointer that stores a pointers that store an address of a value p = 3
    printf("p value:\n-1-by dereferencing *p_p:  %d\n2-by dereferencing **x: %d\n", *p_p, **x);  
    printf("P address: %p\n", p_p);
    printf("P address: %p\n", *x);

}