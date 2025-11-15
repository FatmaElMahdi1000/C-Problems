#include"stdio.h"
#include"stdlib.h"
#include"math.h" // No exponentiation operator in C, we use Pow function from math.h
#define SIZE 5
#define CUBE 3
char *Cube(int *nums, char *result)
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }
    for(int j = 0; j < SIZE; j++)
    {
        int cube = pow(nums[j],CUBE);
        sprintf(result, "Number is : %d and cube of the %d is : %d\n", nums[j] , nums[j], cube);
        printf("%s\n", result);
    }
    return result;
}

int main(void)
{
    int *nums = (int *) malloc(sizeof(int) * SIZE);
    char *result = (char *) malloc(sizeof(char) * 100);
    Cube(nums, result);
    free(nums);
    free(result);
    nums = NULL;
    result = NULL;

}