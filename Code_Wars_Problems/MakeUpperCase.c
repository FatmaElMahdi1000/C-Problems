#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"ctype.h"


char *makeUpperCase (char *string)
{
    int length = strlen(string);

    for(int i = 0; i < length; i++)
    {
        if(islower(string[i]))
        {
            string[i] = toupper(string[i]);
        }
    }

    return string;
}

int main()
{

    char string[] = "Hi there it's me! learning C!";
    char *updated = makeUpperCase (string);
    printf("%s\n", updated);
}