#include"stdio.h"
#include"stdlib.h"
#include "stdbool.h"

#define SIZE 5
//returning updated stack, array of updated ints

//define a new type
typedef struct
{
    //dynamically allocated array to create astack
    int *collection;
    int capacity; //allowed number of ints; capacity, going to be the size of the dynamically allocated array
    int size; //number of elements stored

}Stack;

//function to create the stack. return a pointer to a stack
Stack *create_stack(int capacity)
{
    //collection dynamically allocated arr 

}
//function to destory the stack
void destroy_stack(Stack *stack)
{

}
//A pointer to a struct points to the entire struct block in memory, not just one member.
bool is_empty(Stack *stack)
{

}
bool is_full(Stack *stack)
{

}
//pop an item , returning true if successfully popped the item, false otherwise
//return an item, using item parameter 
bool pop(Stack *stack, int *item)
{

}

bool push(Stack *stack, int item)
{

}
bool peek(Stack *stack, int *item)
{
    
}

int *Push(int stack[SIZE])
{
    int num;
    printf("insert a number: ");
    scanf("%d", &num);
    for(int i = 0; i < SIZE; i++)
    {
        stack[i] = num;
    }
    return stack;
}
int main()
{

    int stack[SIZE];
    int *updated_stack = Push(stack);
    size_t ActualSize =  *updated_stack/ int;
    for(int j = 0; j<= )


}