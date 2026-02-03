#include"stdio.h"
#include"string.h"
#include"stdlib.h" //malloc / calloc 
#include "ctype.h" // it has toupper and tolower functions


char *to_alternating_case(const char *s)  //cannot return s or manipulate it directly as it's const
{
    char *result = (char* ) calloc(strlen(s) + 1, sizeof(char));
    strcpy(result, s); //copy till it hits \0
    for(int j = 0; result[j] != '\0'; j++) //incrementing by j till we hit \0 terminator at the end of out sentence
    {
        if(!isdigit(result[j]) && isupper(result[j])) //if the character is not digit
        {
            result[j] = tolower(result[j]);
        }
        else if(!isdigit(result[j]) && islower(result[j]))
        {
            result[j] = toupper(result[j]);

        }

    }

    return result;

// return a heap-allocated string:
    // return calloc(1, 1);
}
int main()
{
    char *s;
    char *r;
    s = (char*)calloc(strlen(s) + 1, sizeof(char));//initialized memory to zero
    printf("Enter your sentence: ");
    scanf("%[^\n]", s);
    r = to_alternating_case(s);
    printf("%s\n", r);
    free(s);
    free(r);
    s = NULL;
    r = NULL;

}
