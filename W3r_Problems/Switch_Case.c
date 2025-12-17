#include"stdio.h"
#include"stdlib.h"

int main()
{
    int day;
    printf("Enter a day: ");
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Today is Saturday!\n");
        break;
        case 2:
        printf("Today is Sunday!\n");
        break;
        case 3:
        printf("Today is Monday!\n");
        break;
        case 4:
        printf("I really don't know!\n");
        break;

    }
    return 0;

}