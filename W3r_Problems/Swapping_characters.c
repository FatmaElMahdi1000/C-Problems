#include"stdio.h"
#include"string.h"

#define SIZE 100
int main()
{
    char sen[SIZE];
    printf("Enter a sentence: ");
    fgets(sen,SIZE,stdin); //buffer , buffer size, from where it gets it.

    int length = strlen(sen)-1; //-1 to remove the null terminator '\n' the new line character ex: "hello \n \0"

    printf("%d\n", length);

    int first_char_idx;
    int second_char_idx;
    printf("Enter the index of the first character: ");
    scanf("%d", &first_char_idx);
    printf("Enter the index of the 2nd character: ");
    scanf("%d", &second_char_idx);
    
    printf("the updated string after swapping 2 characters:\n");
    int temp;
    temp = sen[first_char_idx];
    sen[first_char_idx] = sen[second_char_idx];
    sen[second_char_idx] = temp;
    
    for(int i = 0; i < length; i++)
    {
        printf("%c", sen[i]);
    }
    printf("\n");

 
}