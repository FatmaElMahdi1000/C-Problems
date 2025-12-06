#include <stdio.h>
#include <string.h>

char *reverse(char *character)
{
    int word_len = strlen(character);          // declare word_len
    static char reversed[100];                 // make it static so it can be returned
    int i;
    
    for (i = 0; i < word_len; i++)
    {
        reversed[i] = character[word_len - 1 - i];  // copy characters in reverse
    }
    reversed[word_len] = '\0';                 // null-terminate the string

    return reversed;
}

int main()
{
    char character[100];
    printf("Enter the word you'd like to reverse: ");
    scanf("%99s", character);                 // remove & and limit input

    if (strlen(character) < 1 || strlen(character) > 100)   // fixed condition
    {
        printf("The word is out of range!\n");
        return 1; // stops the program when there's an error
    }
    else
    {
        char *rev = reverse(character);
        printf("Reversed word: %s\n", rev);
    }

    return 0;
}

// /**Reverse a sentence */
// #include"stdio.h"
// #include"string.h"
// #include "stdlib.h"
// #define SIZE 100

// int main()
// {
//   char string[SIZE] = "Hello World!";
//   char *word = (char *) malloc(sizeof(char) * SIZE); //dynamic allocation

//   int i = 0;
//   int length = strlen(string);  

//   while(i < length)
//   {
//     word[i] = string[length - 1-i];
//     i += 1;
//   }
//   word[length] = '\0';  // C needs a clear marker to know where the string ends, and that marker is the null terminator
//   for(int j = 0; j <length; j++)
//   {
//     printf("%c", word[j]);
//   }
//   printf("\n");
// }