#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"
#include"math.h"
#include"string.h"

typedef unsigned long long ull; //ull is an alias for: positive int(data type)

char *bonus_time(ull *salary, bool *bonus) 
{
    char *decision = (char*) malloc(sizeof(char)*70);

    if(*bonus == true) //scanf reads 1 which is == to true here, we can also say *bool == 1
    {
        ull updated_salary = *salary* 10;
        sprintf(decision, "$%llu", updated_salary); //%llu format specifier for unsigned long long int 
    }
    else //bouns is false or 0
    {
        ull updated_salary = *salary;
        sprintf(decision, "$%llu", updated_salary);
    }
    return decision;

}
int main()
{
    ull s;
    ull *salary = &s;
    int b;
    printf("Enter the salary: ");
    scanf("%llu", &s);
    printf("Is the employee worth the bouns?Enter 0(No Bouns) or 1(Bouns): ");
    scanf("%d", &b); //1
    bool B_b = b;
    bool *bonus = &B_b;
    char *result = bonus_time(salary, bonus);
    printf("%s\n", result);

}

    //About reading boolean values and scanf
    //Notes:
    // _Bool stores 0 (false) or 1 (true).

    // You must read as an integer using %d.

    // C has no %b for booleans.