#include"stdio.h"


int the_sum(int a, int sum)
{
    //2nd iteration sum(1, 1); a != 5, therefore *p_sum = *p_sum + a;
    //base case
    if(a == 5)
    {
        return a;
    }
    else
    {
        //    = 0 + 1  = 1 
        a  = a +1; //this must be calculated first then add to the sum
        sum = sum + a;
        return the_sum(a, sum); //1, 1 

    }
}

int main()
{
    int sum = 0;
    int a = 0;
    printf("The SUM = %d\n", the_sum(a,sum));

}