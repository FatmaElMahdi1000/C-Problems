#include"stdio.h"

int main()
{
    for(int i = 0; i < 9; i++)
    {
        if (i == 0)
        {
            printf("*********\n");
        }
        else if(1 <= i && i < 8)
        {
            printf("*'\t' *\n");
        }
        else 
        {
            printf("*********");
        }
        
    }  
}  

