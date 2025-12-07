#include"stdio.h"
#include"string.h"
#include"stdlib.h"


int summation(int *number) 
{
  int sum = 0;
  int i =1;
  while(i <= *number)
    {
    sum += i;
    i++;
    }
  return sum;
}

int main()
{
  int result;
  int n; 
  int *number = &n;
  printf("Enter a number: ");
  scanf("%d", number);
  result = summation(number);
  printf("%d\n", result);
}