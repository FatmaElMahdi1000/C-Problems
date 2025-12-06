#include"stdio.h" //input/output functions
#include"stdlib.h" //memory allocatio, calloc, Malloc. 
#include"string.h" //for function like: strlen
#define SIZE 12

void sen(char *sentence, int *p_n1, int *p_n2)
{
    char temp;
    printf("Original sentence: %s", sentence);
    if(sentence[*p_n1] != '\0'&& sentence[*p_n1] != '\n' && sentence[*p_n1] != EOF)
    {
        temp = sentence[*p_n1];
        sentence[*p_n1] = sentence[*p_n2];
        sentence[*p_n2] = temp;
    }
    printf("Updated sentence: %s", sentence);
    int len = strlen(sentence);
    if (sentence[len - 1] == '\n')
    {
        len--; //decrementing sentence by 1 char which is the '\n' new line character to give us the acual length
    }
    printf("Sentence Length is: %d\n", len);
}

int main()
{
    int n1;
    int n2;
    int *p_n1 = &n1;
    printf("Enter index1: ");
    scanf("%d", &n1);
    getchar(); //using getchar will remove the '\n' leftover in the stream so it's ready for any input from the user without something extra
    int *p_n2 = &n2;
    printf("Enter index2: ");
    scanf("%d", &n2);
    getchar(); //removes only 1 char
    char sentence[SIZE];
    printf("Enter your sentence: ");
    fgets(sentence, SIZE, stdin);
    sen(sentence, p_n1, p_n2);
    
}

