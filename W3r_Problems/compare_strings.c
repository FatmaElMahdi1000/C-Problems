#include"stdio.h"
#include"stdlib.h"
#include"string.h"

#define SIZE 70
int main()
{
    char string1[SIZE] = "Fatma ElMahdi";
    char string2[SIZE] = "Fatma ElMahdi 1";
    int result = strcmp(string1, string2);
    
    if(result == 0)
        printf("Strings are equal.\n");
    else if(result < 0)
        printf("string1 is less than string2.\n");
    else
        printf("string1 is greater than string2.\n");

    printf("strcmp returned: %d\n", result); // optional: see the exact value

}