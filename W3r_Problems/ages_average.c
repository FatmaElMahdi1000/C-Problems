#include"stdio.h"
int main()
{
    int sum = 0;
    int age;
    int i = 1;
    int counter = 0;
    while (i <= 5)
    {
        printf("Enter the age: ");
        scanf("%d", &age);
        if(age > 0)
        {
            sum = sum + age;
            counter += 1;
        }
        i += 1;
    }
    float avg =  (float)sum/ counter;
    printf("the average: %2f\n", avg);
    return 0;
}