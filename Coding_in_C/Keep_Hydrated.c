#include"stdio.h"
#include"math.h" //functions in math return double type
int Liters(double time) 
{
  return time * 0.5;
}

int main()
{
    double time;
    printf("Enter number of cycling hrs: ");
    scanf("%lf", &time);
    printf("No. of Litres rounded down: %f\n", floor(Liters(time)));

}

// double litres(int *p_hr)
// {
//     return floor(*p_hr * 0.5);
// }

// int main()
// {
//     int hr;
//     int *p_hr = &hr;
//     printf("Enter number of cycling hrs: ");
//     scanf("%d", &hr);
//     printf("No. of Litres rounded down: %f\n", litres(p_hr));

// }