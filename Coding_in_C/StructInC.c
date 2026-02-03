#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"

//with struct only 
// #define SIZE 50
// struct Std
// {
//     int age;
//     char name[SIZE];
//     float gpa;
//     bool FullTimeOrNot;

// };

// int main()
// {
//     struct Std student1 = {20, "Mohamed", 3.14, true};

// }

//with typedef struct 
#define SIZE 50
typedef struct
{
    int age;
    char name[SIZE];
    float gpa;
    bool FullTimeOrNot;

}Std;

int main()
{
    Std student1 = {20, "Mohamed", 3.14, true};
    printf("Student's name:%s\n", student1.name); //We use .name to access a member in the struct.
    printf("Student's name:%f\n", student1.gpa); //We use .name to access a member in the struct.
}
