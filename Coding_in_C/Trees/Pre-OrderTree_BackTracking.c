#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
    struct node* left;
    int data;
    struct node* right; 

} node;

node* Nodecreation(int value)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Root ->Left ->Right
void pre_order_traversal(node* root)
{
    //Recursion Basecase
    if(root == NULL)
    {
        return;
    }
    else{
        printf("%d -> ",root->data);
        pre_order_traversal(root->left);
        pre_order_traversal(root->right);
    }
}

int main()
{
    int value = 2;
    node* root = Nodecreation(value);
    

    root->left =Nodecreation(4);
    root->right = Nodecreation(5);
    root->right->left = Nodecreation(8);
    root->right->right = Nodecreation(9);
    root->left->right = Nodecreation(10);
    root->left->left = Nodecreation(12);
    
    pre_order_traversal(root);
}