#include"stdio.h"
#include"stdlib.h"

//node struct
typedef struct node
{
    int data;
    struct node* next;
}node;

//get node
//allocating memory for the node on the heap
//prompting the user entering the data
//setting newnode next/pointer to null so far
node* getnode()
{
    node *newnode = (node*) malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d", &newnode->next);
    newnode->next = NULL;
    //return the address of the created node:
    return newnode;

}

//Creating a Singly Linked List with "n" number of nodes
void createNode(node* start, int n)
{
    node* newnode; 
    node* temp;
    for(int i = 0; i <= n; i++)
    {
        //REVIEW: building the newnode
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
                //temp moving from node to the other
                temp = temp->next;
            }
            //if while condition is not met, we'll attach the newnode, we've declared at the beginning:newnode = getnode();
            temp->next = newnode;
        }
    }


}

//inserting node at the beginning
void insert_node_at_beg(node* start)
{
    node* newnode;
    newnode = getnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode -> next = start;
        start = newnode;
    }
}
//inserting node at the end
void insert_at_end(node* start)
{
    node* temp;
    node* newnode;
    newnode = getnode();
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while(temp->next!= NULL)
        {
            //move the temp to the next node
            temp = temp->next;
        }
        //as soon as temp->next== NULL, we break through the while loop
        //attaching our node to the end
        temp->next = newnode;
    }


}

//REVIEW COUNT FUNC
//to insert a node at the beg. we need a counter 
int countnode(node* ptr) //replacing ptr with node* start later
{
    int count = 0;
    node* temp;
    
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;//move to the next
    }
    return count;
}
void insert_at_mid(node* start)
{
    int nodecount;
    int pos; //position where we want to insert a node
    node* prev;
    node* newnode;
    node* temp;
    int ctr = 1;
    //allocating a memory for the node.
    newnode = getnode();
    //prompting the user to enter the position of the new node
    printf("Enter the node position: ");
    scanf("%d", &pos);
    
    nodecount = countnode(start);

    



}


int main()
{
    //define the node of the head/start
    node* start = NULL;
    int n = 4;



}
