#include"stdio.h"
#include"stdlib.h"
#include"string.h"


//Copied in the stack memory  
//#define SIZE 50
// int main()
// {
//     char string1[SIZE] = "Fatma ElMahdi";//stored in the stack
//     char string2[SIZE];
//     strcpy(string2, string1);
//     printf("String1: %s\n", string1);
//     printf("The copied string: %s\n", string2);
// }
//Copied in the heap
#define SIZE 50
int main()
{
    char *string1 = (char*) malloc(sizeof(char) * SIZE);
    strcpy(string1, "Fatma ElMahdi"); 
    char *string2 = (char*) malloc(sizeof(char) * SIZE);
    strcpy(string2, string1);// strcpy copies the string data, including the null terminator ('\0'), from the source (string1) into the allocated heap space (string2).
    printf("The copied string : %s\n", string2);
    free(string1);
    free(string2);
    string1 = NULL;
    string2 = NULL;

}