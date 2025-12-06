#include"stdio.h"
int main()
{
    int i = 0;
    int Fail = 0;
    int Pass = 0;
    int score;
    while (i < 10)
    {
        printf("Enter 1 if passed, 2 if failed: ");
        scanf("%d", &score);
        if(score == 1)
        {
            Pass += 1;
        }
        else
        {
            Fail += 1;
        }
        i += 1;

    }

    printf("There are %d students passed the exam\n", Pass);
    printf("There are %d students failed the exam\n", Fail);

    if (Pass > 8)
    {
        printf("Bouns to the instructor!\n");
    }
    return 0;
}