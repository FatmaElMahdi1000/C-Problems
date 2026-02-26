#include"stdio.h" //input 
#include"stdlib.h" //Memory //quick sort 
#include"string.h" 
#define SIZE 10

//struct is contiguous data structure with "different size,different types."
struct Student
{
    char name[SIZE];
    int age;
    int total_marks;
};

int main()
{
    struct Student s1;
    printf("Enter student1 Name: ");
    scanf("%s", s1.name); //we don't need & here as s1.name already decays to a pointer.
    struct Student s2;
    printf("Enter student2 Name: ");
    scanf("%s", s2.name);//we don't need & here as s1.name already decays to a pointer.
    printf("Enter %s's Age: ", s1.name);
    scanf("%d", &s1.age);
    printf("Enter %s's Age: ", s2.name);
    scanf("%d", &s2.age);
    printf("Enter %s's total Marks: ", s1.name);
    scanf("%d", &s1.total_marks);
    printf("Enter %s's total Marks: ", s2.name);
    scanf("%d", &s2.total_marks);
    printf("Student1 info:\n -1-Name: %s\n -2-Age: %d\n -3-Total Marks: %d\n", s1.name, s1.age, s1.total_marks);
    printf("Student2 info:\n -1-Name: %s\n -2-Age: %d\n -3-Total Marks: %d\n", s2.name, s2.age, s2.total_marks);
}
