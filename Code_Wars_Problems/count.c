#include"stdio.h"
#include"stdlib.h"
void count_by(unsigned x, unsigned n, unsigned *result) 
{
  // fill the array result passed as argument with your answer
  printf("[");
  for(unsigned i = 0; i < n; i++)
  {
    result[i] = x  * (i+1);
    if(i < n-1)
    {
      printf("%d,", result[i]);
    }
    else
    {
        printf("%d", result[i]);
    }
  }
  printf("]");

}

int main()
{
    unsigned x = 2;
    unsigned n = 5;
    unsigned result[n];
    count_by(x,n,result);

}