#include"stdio.h"
#include"string.h"

int main()
{

    char *src1 = "Ball";
    char *src2 = "Ball";

    //checks if both ascii values of each character is the same if it gives identical asciis of both words
    //then res = 0, means the words are identical
    int res = strcmp(src1, src2);

    if (res == 0)
    {
        printf("Both sources are identical");

    }
    else if (res > 0)
      printf("The first string appears after the second string \n");
    else
    {
        //means the first non matching character's Ascii of the 2nd word is greater that the first 
        printf("The second string appears after the first string \n");
    }
}