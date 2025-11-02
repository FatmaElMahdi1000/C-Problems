#include<stdio.h>
#include<string.h>

#define Length 10

float bouns(char *name, int *p_overtime, float *p_absent) //returning float as the operation might return float 
{
    float Bonus_Paid;
    float BonusEquation;
    //Bonus Paid= OVERTIME – (2/3)*ABSENT
    BonusEquation = *p_overtime - ((2.0/3) * (*p_absent)); //returning float as the operation might return float
    
    if (BonusEquation > 40)
    {
        Bonus_Paid = 50;
    }
    else if(30 < BonusEquation &&  BonusEquation <= 40)
    {
        Bonus_Paid = 40;
        
    }
    else if(20 < BonusEquation &&  BonusEquation <= 30)
    {
        Bonus_Paid = 30;
        
    }
    else if(10 < BonusEquation &&  BonusEquation <= 20)
    {
        Bonus_Paid = 20;
        
    }
    else if(0 <= BonusEquation &&  BonusEquation <= 10)
    {
        Bonus_Paid = 10;
        
    }

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