#include"stdio.h"
#include"stdlib.h"
//Array size 

#define MAX 5
//global variables 
int stack[MAX];
int top = 0; //used as variable pointer that  points to the next block of memory to store an element at

void push()
{
    int data;//stack element data to push
    if(top == MAX)
    {
        printf("cannot push the element! StackOverFlow!");
        return;
    }
    else
    {
        printf("Enter the element's data you'd like to push: ");
        scanf("%d", &data);
        //top = 3, top = 3 +1 = 4
        //top++ means store the data at index: 3 then increment the top to 4, next position for the upcoming push operation
        stack[top++] = data;
        printf("Data Pushed onto the stack!\n");
    }

}

void pop()
{
    if(top == 0)
    {
        printf("Stack underflow, No elements to pop!");
        return;
    }
    else
    {
        //top refers to the next postion that's available to store an element(Empty Block!)
        //--top, refers exactly to the position of the last element that must be popped 
        printf("Poped Element: %d",stack[--top]);
    }
    printf("\n");

}

void display()
{
    if(top == 0)
    {
        printf("Nothing to display! Empty Stack!\n");
        return;
    }
    else
    {
        printf("Current Stack: ");
        int i = 0;
        for(int i = 0; i <top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push();
    push();
    push();
    display();
    pop();
    display();
    pop();
    pop();
    display();
    pop();
}

