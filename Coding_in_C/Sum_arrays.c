#include"stdio.h"
#include"stdlib.h"
#include <stddef.h> //for size_t unsigned integer

#define SIZE 10
int sum_array(const int values[], size_t count)
{
    int sum = 0;
    if (count == 0)
    {
        return 0;
    }
    else 
    {
        for(int j = 0; j < count; j++)
        {
            sum = sum + values[j];
        }
        return sum;
    }
}

int main()
{
    int values[SIZE];
    size_t count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter a number: ");
        int n = scanf("%d", &values[i]);
        if(n != 1)
        {
            break;
        }
        count += 1;
    }
    int s = sum_array(values, count);
    printf("The Sum: %d\n", s);

}