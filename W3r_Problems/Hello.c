#include <stdio.h>
char *Data(int age, char *name) //There's no string data type. in C, so we add "char *"
{
    printf("My name is: %s , My age is: %d\n", name, age);

    return name; //Returning name to main function(returning the same pointer to the string of char or "char *" to main after the function execution)
} 
int main()
{
    char name[] = "Fatma"; //array of characters
    int age = 29;
    char *result = Data(age, name);

}