#include"stdio.h"
#include"stdlib.h"


typedef struct node
{
    int data;
    struct node* next; //pointer to the next node;

}node;

//Passing global values 
node* start = NULL;
node* top = NULL;

//getNode
node* getNode()
{
    //newnode is our stack top here.
    node* newnode = (node*) malloc(sizeof(node));
    printf("Enter the node's (new stack's element) data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}
//like adding new node to the end(this is the push operation in the stack)
void push()
{
    node* temp;
    node* newnode = getNode();
    if(start == NULL)
    {
        //both refer to the same thing/ attach the same thing. (New node (stack element))
        start = newnode;
        top = newnode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        top = newnode;  //makes top point to the newly added node, which is now the last node in the list.
    }

}

void pop()
{
    node* temp;
    if(top == NULL)
    {
        printf("Empty stack, No elements to delete! StackUnderflow!\n");
        return; //to stop the program here only
    }
    else
    {
        temp = start;
        //checking a stack with only one element(node)
        if(start->next == NULL)
        {
            //REVIEW 
            printf("Popped Element = %d", top->data);
            start = NULL;
        //NOTE: top is not just a struct variable here
        //It is a pointer to a node that was previously created dynamically with malloc.
        //newnode = (node *)malloc(sizeof(node)); //top = newnode; in push func.that's why we're freeing it now.
            free(top);
            top=NULL;
        }
        while(temp->next != top)
        {
            temp =temp->next;
        }
        //temp keeps moving till it hits the top, then it changes temp->next to points to NULL instead of pointing to the top(Deleting the last element)
        temp->next = NULL;
        printf("Popped Element = %d", top->data);
        free(top);
        top = temp;
    }
    printf("\n");

}

void display()
{
    node* temp;
    if(top == NULL)
    {
        printf("This is an empty stack!\n");
    }
    else
    {
        temp = start;
        printf("  %d", temp->data);
        while(temp != top)
        {
            temp = temp->next;
            printf("  %d", temp->data);
        }
    }
    printf("\n");

}
//like removing new node to the end(this is the push operation in the stack)
int main()
{
    push();
    push();
    push();
    display();
    pop();
    display();
    push();
    display();

}