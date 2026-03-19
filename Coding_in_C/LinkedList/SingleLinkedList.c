#include"stdio.h"
#include"stdlib.h" //Memory allocation 

//Defining the Node Structure 
typedef struct node 
{
    int data;
    //The * means it is a pointer (it stores a memory address).It points to another struct node.
    struct node *next;

}node;

//creating the node and allocating memory in the heap for it.
node* getnode()
{
    node* newNode;
    //allocating memory for the node in the heap
    newNode = (node*) malloc(sizeof(node*));
    printf("Enter the Node's Data: ");
    scanf("%d", &newNode->data);
    //setting the pointer of the next node to NULL
    //since we're moving NUll as we traverse/move
    newNode->next = NULL;

    //Returning the address of the created node 
    return newNode;
   
}

//Creating a Singly Linked List with "n" number of nodes
void createlist(int n, node *start)
{
    node *newNode;
    //I am moving with temp, it's a seperate entity here,
    node *temp; 
    for(int i = 0; i< n; i++)
    {
        newNode = getnode();
        //this is true in the first iteration, after this: [start->newNode[Data| Null]]
        if (start == NULL)
        {
            start = newNode;
        }
        else
        {
            // starting from nxt iteration : [temp/start->newNode[Data| Null]] temp is kind of hook, temp = start means both are the same thing
            temp = start;
            while(temp ->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

    }

}


//Insertion Nodes at the beginning:
void insert_at_beg(node* start)
{
    //giving the node its building block, data, and the pointer = *next
    node *newnode;
    //calling getnode() for 3 reasons:
    //allocating memory for the new node
    //prompt the user to store data in the data variable
    //setting its next to NULL so far
    newnode = getnode();
    if(start  == NULL)
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

void insert_at_end(node* start)
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
            //since we've linked list of nodes, this helps our temp(walker) that's carrying a pointer to keep moving till the end
            //as soon as it reaches the end it attached our new node, we want to add at the end.
            temp = temp->next;
        }
        //when while evaluates to false = we reached the end
        temp->next = newnode; //attach the new node.

    }
}



//Node counter: 
//REVIEW 
int countnode(node *ptr) //we'll pass in start(the linked list head) later 
{
    int count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next; //move to the next
    }
    return(count);
}

//REVIEW
//inserting a node at intermediate position we specify:
void insert_at_mid(node*start)
{
    node* newnode;
    node* temp;
    node* prev;
    int pos; //position
    int nodectr; //node counter
    int ctr = 1; //counter 
    newnode = getnode();
    printf("Enter the position: ");
    scanf("%d", &pos);
    nodectr = countnode(start);
    
    if(pos > 1 && pos< nodectr)
    {
        temp = prev = start;
        //REVIEW 
        while(ctr < pos)
        {
            prev = temp;
            temp = temp->next;
            ctr++;

        }
        prev->next = newnode;
        newnode->next = temp;
    }
    else
    {
        printf("The position is not a middle position!");
    }
}

//Deleting node at the beginning
void delete_at_beg(node* start)
{
    node* temp; //this is a pointer to struct temp, it's an address, no data, no values assigned. ONLY address
    if(start == NULL)
    {
        printf("The list is empty to delete nodes!");
    }
    else
    {
        temp =  start;
        start = temp->next;
        //no longer needed; free the memory.
        free(temp);
    }
}
//Deleting node at the END 
void deleting_at_End(node* start)
{
    node* temp;
    node* prev;//for tracking 

    if(start == NULL)
    {
        printf("Empty list, No nodes to delete!");
    }
    else
    {
        start = temp = prev;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        //we've reached the null or temp reached the NULL 
        //no we delete, controlling what prev pointer is pointing at
        prev->next = NULL;
        //no  longer needed
        free(temp); 

    }

}

void deleting_in_Middle(node* start)
{
    node* prev;
    node* temp;
    int nodectr;
    int ctr = 1;
    int pos; //position of the node to be deleted 
    nodectr = countnode(start);
    printf("Eneter the node position: ");
    scanf("%d", &pos);
    if(start == NULL)
    {
        printf("Nothing to delete!");

    }
    else
    {

        if(pos <nodectr && pos > 1 )
        {
            start = temp = prev;
            while(ctr < pos)
            {
                prev = temp;
                temp=temp->next;
                ctr++;
            }
            prev->next = temp->next;
            free(temp);
            printf("Node deleted\n");
            
        }
    }


    

}

int main()
{
    //linked list entity, 
    //Null is going to move with us till the end when inserting new nodes, end up marking the end of the list
    node *start = NULL;
}