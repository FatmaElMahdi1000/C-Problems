#include <stdio.h>

char *date(char *name, int age)
{
    printf("My Name is: %s AND my age is:%d\n", name, age);
    return name;
}

int main()
{
    char name[] = "Fatma"; 
    int age = 29;
    char *returned_value = date(name, age);
}