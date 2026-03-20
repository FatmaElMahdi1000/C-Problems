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
    scanf("%lf", &newnode->coef);
    fflush(stdin);
    printf("Enter the node's Exponent: ");
    scanf("%d", &newnode->expo);
    fflush(stdin);
    newnode->next = NULL; 
    return newnode;

}


//create the node by asking the user to enter the coefficient and the exponent of each node
//How many number of nodes


int main()
{
    node* start = NULL;
    printf("Enter the polynomial: ");
    

}