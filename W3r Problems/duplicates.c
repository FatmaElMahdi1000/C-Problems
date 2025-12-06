#include <stdio.h>
#include <string.h>
#define SIZE 6

char *duplicate(char *result)
{
    int num[SIZE];           // allocate array for numbers
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }

    result[0] = '\0';        // initialize result string

    int j = 0;
    while (j < SIZE)
    {
        int k = j + 1;       // reset k for each j
        int duplicate_found = 0;

        while (k < SIZE)
        {
            if (num[j] == num[k])
            {
                printf("Duplicate has been found: %d\n", num[j]);
                duplicate_found = 1;
                break;
            }
            k++;
        }

        if (!duplicate_found)
        {
            char line[50];
            sprintf(line, "Num is %d\n", num[j]);
            strcat(result, line);   // append to result
            printf("%s", line);     // optional print
        }

        j++;
    }

    return result;
}

int main()
{
    char result[500];          // buffer for messages
    duplicate(result);
    printf("\nAll unique numbers collected:\n%s", result);
    return 0;
}
