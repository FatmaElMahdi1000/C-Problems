#include "stdio.h"
int main()
{
    float discount;
    printf("Discount options\n"
        "1. 10% \n"
        "2. 20% \n"
        "3. 30% \n");

    printf("chose from 1 to 3 only: ");
    scanf("%f",&discount);

    if(1 < discount || discount > 3)
    {
        printf("Invalid choice, Exit the program!");
        return 1; 
    }
    else
    {
        switch((char)discount)
        {

        }
    }

    }