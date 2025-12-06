// #include"stdio.h"
// void table(int *p_num)
// {
//     for (int i= 1 ; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n", *p_num, i, i * (*p_num));
//     }

// }

// int main()
// {
//     int num;
//     int *p_num = &num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     table(p_num);

// }
#include"stdio.h"
#include"stdlib.h"
void table(int *p_num, int *table_result)
{
    for (int i= 1 ; i <= 10; i++)
    {
        table_result[i] = i * (*p_num);
    }

}

int main()
{
    int *table_result = (int *)malloc(sizeof(int) * 10);
    int num;
    int *p_num = &num;
    printf("Enter a number: ");
    scanf("%d", &num);
    table(p_num, table_result);

    for (int j = 1; j <= 10;  j++)
    {
        printf("%d X %d = %d\n", num, j, table_result[j]);
    }

    free(table_result);
    table_result = NULL;
    return 0;

}