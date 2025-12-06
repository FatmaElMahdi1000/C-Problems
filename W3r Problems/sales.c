#include"stdio.h"
int main()
{
    int per_week_amount = 200;
    float sales;
    float gross_sales;

    printf("Enter Sales in USD: ");
    scanf("%f", &sales);
    while (sales != -1)
    {
        gross_sales = per_week_amount + (sales * 0.09);
        printf("Gross sales of the salesperson: %f \n", gross_sales);
        printf("Enter Sales in USD: ");
        scanf("%f", &sales);
    }
    return 0;
}