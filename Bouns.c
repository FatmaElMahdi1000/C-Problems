#include<stdio.h>
#include<string.h>

#define Length 10

float bouns(char *name, int *p_overtime, float *p_absent) //returning float as the operation might return float 
{
    //Bonus Paid= OVERTIME – (2/3)*ABSENT
    float Bonus_Paid = *p_overtime - ((2.0/3) * (*p_absent)); //returning float as the operation might return float 
    return Bonus_Paid;
}

int main(void)
{
    char name[Length]; //character is one byte this is 8bits
    printf("Enter your name: ");
    scanf("%s", name);
    int overtime = 16; //over time hrs spent 3 hrs
    float absent = 13.5; //abscent hrs
    int *p_overtime = &overtime;
    float *p_absent = &absent;
    float Bouns = bouns(name, p_overtime, p_absent);
    printf("Employee Name: [%s], The Bouns is: [%f]" , name , Bouns);
}