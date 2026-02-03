#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include"stdio.h"

char *hoop_count(uint32_t *n) 
{
    char *msg = (char*) malloc(sizeof(char) *100);
    if(*n > 10)
    {
        strcpy(msg, "Great, now move on to tricks");
    }
    else if(0 < *n && *n < 10)
    {
        strcpy(msg, "Keep at it until you get it");
    }

    return msg;
  
}
int main()
{
    uint32_t hoops;
    uint32_t *n= &hoops;
    printf("Enter the number of hoops: ");
    scanf("%d", n);
    char *message = hoop_count(n);
    printf("%s\n", message); 
    free(message);
    message = NULL;
}