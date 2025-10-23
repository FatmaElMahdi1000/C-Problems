#include<stdio.h>


int main()
{
    int m = 10;
    int *p_m = &m; //p_m is a variable (pointer) that holds the address of another variable in the memory thar's m
    printf("Printing m address in memory: %p\n", p_m); 
    printf("Printing m address in memory: %p\n", &m);
    printf("Printing m value: %d\n", *p_m);
    
}