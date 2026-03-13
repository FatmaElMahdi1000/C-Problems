#include"string.h"
#include"stdio.h"


int main()
{
    char src[] = "Hello there";
    char *dest;

    strcpy(dest, src);
    printf("%s\n", dest);
}