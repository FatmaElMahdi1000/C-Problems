#include"stdio.h"
#include"string.h"

int main()
{
    char *str = "w3resource";
    int count = 0;

    while(*str != '\0')
    {
        count +=1;
        str++;
    }
    printf("The length = %d\n", count);
}