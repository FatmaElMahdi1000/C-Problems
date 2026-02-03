#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int sum(const int numbers[/*length*/], int length)
{
    int sum = 0;
    bool skip_max_done = false;
    bool skip_min_done = false;
    bool set_values = true;

    int i = 0;
    int max;
    int min; 

    while(i <length)
    {
        if(set_values)
        {
            max = numbers[i];
            min = numbers[i];
            set_values = false;
        }

        if(max < numbers[i])
        {
            max = numbers[i];
        }
        if(min > numbers[i])
        {
            min = numbers[i];
        }
        i++;
    }

    for(int j = 0; j <length; j++)
    {
        if(numbers[j] == max && !skip_max_done)
        {
            skip_max_done  = true;
            continue; // skip first max
        }
        if(numbers[j] == min && !skip_min_done)
        {
            skip_min_done  = true;
            continue; // skip first min
        }
        sum += numbers[j];
    }
    return sum;
}

int main()
{
    const int numbers[] = { 6, 2, 1, 8, 10 };
    int length = sizeof(numbers)/ sizeof(numbers[0]);
    int result = sum(numbers, length);
    printf("%d\n", result);
}