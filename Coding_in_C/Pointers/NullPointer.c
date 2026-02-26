#include"stdio.h"
#include"stdlib.h"

int main()
{
    int *ptr = NULL;

    //in some sources, it's better to add (void*) when printing the address
    printf("Address = %p\n", (void*)ptr);

     printf("Address = %p\n", ptr);
    //dereferencing won't work since nothing stored in the memory it's null.

}