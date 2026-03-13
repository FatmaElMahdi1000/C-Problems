#include"stdio.h"
#include"string.h"
#include "ctype.h" //to upper() functions , tolower()
#include "stdbool.h"
// int main()
// {
//     float grade;
//     int counter = 0;
//     float sum = 0;
//     while(counter <10)
//     {
//         printf("Enter the grade: ");
//         scanf("%f", &grade);
//         sum += grade;
//         counter +=1;

//     }
//     float total = sum / (float) counter;
//     printf("The Average: %f\n", total);
// }


int main()
{
    float grade;
    float average;
    float sum = 0.0;
    int counter = 0;
    printf("Enter grade: ");
    scanf("%f", &grade);

    while(grade != -1)
    {
        sum += grade;
        counter += 1;
        printf("Enter grade: ");
        scanf("%f", &grade);
    }

    if (counter > 0)
    {
        average = sum / (float) counter;
        printf("AVERAGE = %f\n", average);
    }
    else
    {
        printf("No GRADES ENTERED! \n");
    }

}