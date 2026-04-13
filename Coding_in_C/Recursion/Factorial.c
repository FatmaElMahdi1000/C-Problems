#include"stdio.h"
#include"stdlib.h"

int fact = 1;
int Num = 5;
int factRecursivecall(int n)
{
    if(n == 0) //base case 
    {
        return 1;
    }
    else
    {
        int result = n * factRecursivecall(n-1);
        return result;
    }
}

int main()
{
    int n = 5;
    printf("%d", factRecursivecall(n));
}