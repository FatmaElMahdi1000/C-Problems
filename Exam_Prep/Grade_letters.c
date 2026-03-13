#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
int main()
{
    int a_count = 0, b_count = 0, c_count = 0, d_count = 0, e_count = 0, f_count = 0;
    char ch; 
    printf("Enter a letter from A-F, if Z, exit: ");
    scanf(" %c", &ch);
    while (tolower(ch) != 'z')
    {
        switch(ch)
        {
            case 'a':
                a_count += 1;
                break;
            case 'b':
                b_count += 1;
            case 'c': 
                c_count += 1;
                break;
            case 'd': 
                d_count += 1;
                break;
            case 'e':
                e_count += 1;
                break;
            case 'f':
                f_count += 1;
                break;
        }
        scanf("%c", &ch);
    }
    printf("a_count = %d, b_count = %d, c_count = %d, d_count = %d, e_count = %d, f_count = %d\n",a_count, b_count, c_count, d_count, e_count, f_count);
    return 0;

}