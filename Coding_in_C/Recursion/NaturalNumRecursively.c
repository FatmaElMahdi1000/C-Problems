#include "stdio.h"
#include "stdlib.h"

void NaturalNum(int a)
{
    //base case/condition
    if (a <= 50)
    {
        printf("%d ", a);
        NaturalNum(a + 1);
    }
}

int main()
{
    int a = 1;
    NaturalNum(a);

}
//REVIEW : Time complexity: O(n) 

//Each recursive call:

//Prints one number → O(1)

//Calls itself once → constant work