#include"stdio.h"
#include"stdlib.h"

typedef struct node
{
    //coefficient
    float coef;
    //exponent
    int expo;
    struct node* next;

}node;
//build the node's structure
node* getnode()
{
    //node memory allocation
    node* newnode = (node*) malloc(sizeof(node));
    printf("Enter the node's coefficient: ");
    //REMEMBER: %f for float %lf for double in scanf func.
    scanf("%f", &newnode->coef);
    fflush(stdin);
    printf("Enter the node's Exponent: ");
    scanf("%d", &newnode->expo);
    fflush(stdin);
    newnode->next = NULL; 
    return newnode;

}

//create the node by asking the user to enter the coefficient and the exponent of each node
//How many number of nodes
node* createnode(node* start, int n)
{
    node* newnode;
    node* temp; //for traversal.
    for(int i= 0; i <n; i++)
    {
        newnode = getnode();
        if(start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while(temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next = newnode;

        }

    }

    //returning start to main so, it knows from where to begin 
    return start;
}

//Polynomial Display Func
void display(node* start)
{
    node* temp = start;
    while(temp != NULL)
    {
        printf("+ %2.f", temp->coef);
        printf("X^ %d", temp->expo);
        temp = temp->next;
    }


}
//REMAINING PART: CALLING Func in main
int main()
{
    node* start = NULL;
    printf("Enter the polynomial: ");
    

}