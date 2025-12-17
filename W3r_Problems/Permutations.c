#include<stdio.h>
#include<string.h>

#define length 5
char *permutation(char *p_word)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (!(p_word[i] == p_word[j]))
            {
                printf("%c%c", p_word[i], p_word[j]);
                if (p_word[j + 1] == p_word[i] && j + 2 < length)
                {
                    printf("%c", p_word[j + 2]);
                }
            }
            
        }
        printf("  ");
    }
    return p_word; //returing the array of char. or the string to main to work on.

    }

int main()
{
    char word[length + 1];
    char *p_word = word; 

    printf("Enter your word:  ");
    scanf("%s", word);
    permutation(p_word);
    return 0;
}