//array of ints, stored dynamically, then check if each number is even or odd and print a msg
#include"stdio.h"
#include"stdlib.h" //for malloc
void evenOrodd(int *arr, int size)
{
    for(int j= 0; j < size; j++)
    {
        if(arr[j] % 2 == 0)
        {
            printf("The number {%d} is even!\n", arr[j]);
        }
        else
        {
            printf("The number {%d} is odd!\n", arr[j]);
        }
    }
}

int main()
{
    int size = 5;
    int *arr = malloc(sizeof(int) * size);
    for(int i= 0; i < size; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    evenOrodd(arr,size);
    free(arr);
    arr = NULL;
    return 0;

}