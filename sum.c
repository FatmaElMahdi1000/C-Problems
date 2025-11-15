// #include <stdio.h>

// int main()
// {
//     int size = 4;
//     int sum = 0;    
//     int i = 0;  
//     int arr[size];
//     while (i < size){  //pretest
//         printf("Enter a num: ");
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//         i+= 1;
//     }
    
//     for(int k = 0; k < size; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     printf("\n");
//     printf("the sum = %d\n", sum);
// }

//Do while loop 
#include<stdio.h>
int main()
{
    int sum = 0;
    int size = 4;
    int arr[size];
    int i = 0;
    do   //posttest (after doing/ executing the condition part, once)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        sum += arr[i];
        i+= 1;
    }   
    while(i < size);

    for(int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    printf("the sum = %d\n", sum);

}














