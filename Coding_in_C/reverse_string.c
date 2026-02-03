#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main()
{
    char string[] = "hi there this is Fatma";
    int str_size = strlen(string);

    for(int i = str_size - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

}
