#include"stdio.h"
#include"stdlib.h"
#include"string.h" //for strcpy
#define SIZE 100
void validation(char *name)
{
    char *entered_name = (char *) malloc(sizeof(char) *SIZE);
    int found = 0; //boolean variable
    printf("USER NAME: ");
    fgets(entered_name, SIZE, stdin);
    entered_name[strcspn(entered_name, "\n")] = '\0';

    while (!found)
    {
        if (strcmp(entered_name, name) == 0) //strcmp, exists since we cannot compare strings in c.
        {
            printf("The Entered Name is correct!");
            found = 1;
            break;
        }
        else
        {
            printf("Incorrect user name, Enter the name again: ");
            fgets(entered_name, SIZE, stdin);
            entered_name[strcspn(entered_name, "\n")] = '\0';
        }
    }
    free(entered_name);
    entered_name = NULL;
} 

int main()
{
    char *name = (char *)malloc(sizeof(char) * SIZE);
    strcpy(name, "Fatma ElMahdi"); //strcpy: copies 
    validation(name);
    free(name);   // ✅ IMPORTANT
    name = NULL;
}