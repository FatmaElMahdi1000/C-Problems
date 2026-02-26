#include "stdio.h"
#include "stdlib.h"
#include "string.h" //for built in function like strlen
int main()
{
    char x = 'h';
    char *p_x = &x;
    printf("Value @x = %c\n",*p_x);
    char sent[] = "hello";

    //added -1 as memory looks like H e l l o \0   ... there's a null terminator we must substract.
    size_t len = (sizeof(sent)/ sizeof(char)) - 1;
    printf("Actual size of sent = %d\n", len);
    char *p_sent = sent;
    printf("First Value @sent = %c\n",*p_sent);

    //increment the pointer to print the string.
    for(int i = 0; i < len; i++)
    {
        printf("%c", *p_sent);
        p_sent++;
    }
    printf("\n");
    
    //another way to get the size of the string.
    int len_val = strlen(sent);
    printf("%d\n", len_val);
}
