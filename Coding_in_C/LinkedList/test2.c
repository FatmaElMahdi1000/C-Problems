#include"stdio.h"
#include"stdlib.h"

//node struct
typedef struct node
{
    int data;
    // pointer to the next node/ which is the next same struct of data and struct node* next;
    struct node* next;
}node;
//1-allocate node struct memory, return and make its next = null, since no other nodes yet
node* getnode()
{
    node* newnode = (node*) malloc(sizeof(node*));
    printf("Enter your node's data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
    //return a node with the struct, allocated memorey for it
}
//creating a linked list of n nodes 
//returning void since we only keep attaching new nodes with n numbers
void creatinglinkedlist(int n, node* start)
{
    node* newnode;
    node* temp;
    for(int i = 0; i <n; i++)
    {
        //give it the node struct data and next pointer
        newnode = getnode();
        if(start == NULL)
        {
            //in the 1at iteration it's true that star == Null, therefore, we're attaching the newnode to start
            start = newnode;
        }
        else
        {
            temp = start;
            while(temp->next != NULL)
            {
                temp= temp->next;
            }
            temp->next = newnode;
        }


    }
}
//insert node at the beginning
void insert_at_beg(node* start)
{
    int *ptr;
    node* newnode = getnode();
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }


}
//inserting node at the end
void inserting_at_theEnd(node* start)
{
    node* newnode;
    node* temp;
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
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
//"This function expects the memory address of a node structure."
//prev here passed as a pointer/
//address not a variable declared in main and we've used as we're typically doint .
//*ptr = *start, it's for passing the address of the starting point. 
int counter(node *ptr)
{
    int count = 0;
    while(ptr!= NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return  count;

}
//inserting at mid needs a counter;
void insert_at_mid(node* start)
{
    node* newnode;
    node* prev;
    node* temp;
    int pos;
    int nodecounter;
    int ctr1 = 1;//at least one node is there
    newnode = getnode(); //give the node it's data, next pointer
    printf("Enter where you'd like to attach the node: ");
    scanf("%d", &pos);
    
    nodecounter = counter(start);
    if(pos >1 && pos < nodecounter)
    {
        temp=prev=start;
        //REVIEW 
        while(ctr1 <pos)
        {
            prev = temp;
            temp=temp->next;
            ctr1++;
        }
        prev->next = newnode;
        newnode->next = temp;

    }



}



int main()
{
    //starting point
    node* start = NULL;
}