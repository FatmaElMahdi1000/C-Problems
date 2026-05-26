#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct node
{
    struct node* left;
    char data[10];   //let it be a tree of letters this time 
    struct node* right;

}node;

node* Q[50]; 
int node_ctr;

// is an array that can store 50 pointers to nodes
//        A
//       / \
//      B   C
// Then maybe:
// Q[0] -> address of A address of a tree node A
// Q[1] -> address of B address of a tree node A
// Q[2] -> address of C address of a tree node A

node* createNode(char value[])
{
    node* newNode = (node*) malloc(sizeof(node));
    strcpy(newNode->data, value);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
    
    
}
/* Store nodes inside array using binary tree indexing */
void queue(node* root, int parent)
{
    if(root!= NULL)
    {
        Q[parent] = root;
        node_ctr += 1;
        queue( root->left,  parent * 2 + 1);
        queue(root ->right, parent * 2 + 2);

    }
}

//printing level order traversal

void level_order(node* Q[], int node_ctr)
{
    int i;
    for(int i = 0; i<50; i++)
    {
        if(Q[i] != NULL)
        {
            //String specifier
            printf("%s ", Q[i] -> data);
        }
    }
}

int main()
{
    node* root =  createNode("A");
    root ->left = createNode("B");
    root->right = createNode("C");
    root ->left->left = createNode("D");
    root ->left->right = createNode("E");
    root ->right->left = createNode("F");
    root ->right->right = createNode("G");

    //this pointer points to nothing, creates safe empty positions.uninitialized pointers contain garbage values. LIKE: Q[0] = 0x827361
    // Why this is dangerous
    // Later we do:
    // if (Q[i] != NULL)
    //     printf("%s ", Q[i]->data);  If Q[i] contains random garbage instead of NULL: Q[i]->data tries to access invalid memory.
    //Creating queue for the tree: //Parent index = 0  to store nodes inside the Q[] array
    
    for(int i =0; i <50; i++)
    {
        Q[i] = NULL; //the value that the pointers are pointing to is NULL. so far,can be overwritten later with "A" node's value for example
    }
     /* Fill array */
    queue(root,0);

    /* Tree Traversal */
    level_order(Q, node_ctr);
    return 0;

}