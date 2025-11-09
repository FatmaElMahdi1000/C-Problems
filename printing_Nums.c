#include<stdio.h>
void printingSeq(int k);
int main()
{
    int k = 10;

    int i = 0;
    printf("in ascending order\n");
    while (i <= 10)
    {
        //in ascending order
        printf("number is: {%d}\n", i);
        i += 1;
    }
    printingSeq(k);
    return 0;
}
//Another sequence
void printingSeq(int k)
{
    printf("in descending order\n");
    while(k >= 0)
    {
        printf("number is: {%d}\n", k);
        k -= 1;
    }
}