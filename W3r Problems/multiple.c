#include "stdio.h"

int main()
{
    float weight;
    float height;

    printf("User weight (in pounds): ");
    scanf("%f", &weight);

    printf("Enter height in inches: ");
    scanf("%f", &height);

    float BMI = (weight * 703) / (height * height);

    if (BMI > 0 && BMI < 18.5)
    {
        printf("You're underweight!\n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("You're normal!\n");
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        printf("You're overweight!\n");
    }
    else if (BMI >= 30)
    {
        printf("You're obese!\n");
    }
    else
    {
        printf("Invalid BMI, something went wrong!\n");
    }
}
