#include"stdio.h"
#include"stdlib.h"
#include "stdbool.h"

// Stack structure definition
// collection → dynamically allocated array that holds stack elements
// capacity → maximum number of elements the stack can hold
// size → current number of elements stored in the stack
typedef struct
{
    int *collection;
    int capacity;
    int size;

}Stack;

// Function to create a stack and allocate memory on the heap
// Returns a pointer to the newly created stack, or NULL if allocation fails
Stack *create_stack(int capacity)
{
    if(capacity <= 0)
    {
        return NULL;
    }

    // Allocate memory for the stack structure
    Stack *stack = (Stack*) malloc(sizeof(stack));

    // Check if memory allocation for stack structure failed
    if (stack == NULL)
    {
        free(stack);
        return NULL;
    }

    // Allocate memory for the stack elements array
    (*stack).collection = (int*) malloc(sizeof(int) * capacity);

    // Check if memory allocation for the array failed
    if ((*stack).collection == NULL)
    {
        free(stack);
        return NULL;
    }

    (*stack).capacity = capacity;
    (*stack).size = 0;

    return stack;
}

// Function to free memory allocated for the stack
void destroy_stack(Stack *stack)
{
    free((*stack).collection);
    free(stack);
}

// Check if stack is empty
bool is_empty(Stack *stack)
{
    return (*stack).size == 0;
}

// Check if stack is full
bool is_full(Stack *stack)
{
    return (*stack).capacity == (*stack).size;
}

// Remove top element from stack
// Returns true if pop was successful, false otherwise
// The popped value is stored in item
bool pop(Stack *stack, int *item)
{
    if(is_empty(stack))
    {
        return false;
    }
    else
    {
        (*stack).size--;
        *item = (*stack).collection[(*stack).size];
        return true;
    }
}

// Add an item to the top of the stack
// Returns true if push succeeded, false if stack is full
bool push(Stack *stack, int item)
{
    if(is_full(stack))
    {
        return false;
    }
    else
    {
        (*stack).collection[(*stack).size] = item;
        (*stack).size++;
        return true;
    }
}

// Retrieve the top element without removing it
// Returns true if successful, false if stack is empty
bool peek(Stack *stack, int *item)
{
    if(is_empty(stack))
    {
        return false;
    }
    else
    {
        *item = (*stack).collection[(*stack).size - 1];
        return true;
    }
}

int main()
{
    int capacity = 5;
    Stack *stack = create_stack(capacity);

    if(stack == NULL)
    {
        fprintf(stderr,"Error creating a stack!\n");
        exit(EXIT_FAILURE);
    }

    push(stack, 3);
    printf("Stack Size: %d \n", (*stack).size);

    push(stack, 9);
    push(stack, 4);
    push(stack, 4);
    push(stack, 4);

    int peek_val = 0;
    peek(stack, &peek_val);
    printf("Peek Val: %d\n ", peek_val);

    int pop_val = 0;

    for(int i=0; i<5; i++)
    {
        pop(stack, &pop_val);
        printf("Popped value: %d\n", pop_val);
    }

    if(is_full(stack))
    {
        printf("Stack is FULL NOW!\n");
    }

    destroy_stack(stack); 
}