#include "stdio.h"
#include "stdlib.h"
#include "time.h"
typedef struct
{
    int hr;
    int min;
    int sec;

}time_val;

//convert time_vals to seconds first, substracting then, convert the new time back to hrs. min, sec.

int time_in_Sec(time_val time1, time_val time2)
{
    double hr_conv = 3600;
    double min_conv = 60;
    double TotalSec = (time1.hr)*hr_conv+(time1.min)*min_conv+(time1.sec) + ((time2.hr)*hr_conv +(time2.min)*min_conv+(time2.sec)); 
    return TotalSec;
}


int main()
{
    time_val time1;
    time_val time2;
    double hr_conv = 3600;
    double min_conv = 60;
    printf("Enter the hrs mins secs respectively of the 1st time: ");

    scanf("%d%d%d", &time1.hr, &time1.min, &time1.sec);
    printf("Enter the hrs mins secs respectively of the 2nd time: ");
    scanf("%d%d%d", &time2.hr , &time2.min, &time2.sec);
    
    int TotalSec = time_in_Sec(time1, time2);
    //  % does not work with double.  
    int hrs_num  =  TotalSec / 3600;
    int remaining_sec =  TotalSec % 3600;
    int min_num = remaining_sec / 60;
    int sec_num = remaining_sec % 60;

    printf("Calculated time after addition = %d Hrs: %d Mins : %d Secs\n", hrs_num, min_num, sec_num);
     
}