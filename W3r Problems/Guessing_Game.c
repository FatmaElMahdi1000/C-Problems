#include"stdio.h"
#include"stdlib.h" /**for srand */
#include"time.h"/**for srand */
#define SIZE 20
void guess(int arr[SIZE])
{
    int found = 0;
    int guess;
    for (int k = 0; k < SIZE; k++)
    {
        if (k == SIZE-1)
        {
            printf("%d", arr[k]);
        }
        else
        {
            printf("%d, ", arr[k]);
        }
    }
    printf("\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);
    while (!found)
    {
        int j = 0;
        while(j < SIZE)
        {
            if(guess == arr[j])
            {
                printf("You Guessed it correctly: it's {%d}, Your number is in the list!\n", guess);
                found = 1;
                break;
            }
            j++;

        }
        if(!found)
        {
            printf("Sorry, %d is not in the list. Try again: ", guess);
            scanf("%d", &guess);
        }
    }

}

int main()
{
    int arr[SIZE]; //stored in the stack, did not store it in the heap using malloc
    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = (rand() % 20) + 1; //to get 20 random number, added one as rand() range is  from 0 to 19,added 1 for 20
    }
    guess(arr);

}