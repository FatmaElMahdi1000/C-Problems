#include"stdio.h"
int main()
{
    int acc_num;
    float balance;
    float items;
    float credits;
    float new_balance;
    printf("Enter the account num: ");
    scanf("%d", &acc_num);

    while (acc_num != -1)
    {
        printf("Enter the balance: ");
        scanf("%f", &balance);
        printf("Enter the items: ");
        scanf("%f", &items);
        printf("Enter the credits: ");
        scanf("%f", &credits);
        new_balance = balance + items - credits;
        printf("Account:%d\nCredit limit:%f\nBalance:%f\n", acc_num,credits, new_balance);
        if (new_balance > credits)
        {
            printf("Credit limit exceeded.\n");
        }
        printf("\nEnter the account num (-1 to end): ");
        scanf("%d", &acc_num);
    }
 
}