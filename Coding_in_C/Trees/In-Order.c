#include"stdio.h"
#include"stdlib.h"

typedef struct node
{
    struct node* left;
    struct node* right;
    int data;

}node;

node* newNode(int value)
{
    node* newNode = (node*) malloc(sizeof(node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void In_Order(node* root)
{
    if(root != NULL)
    {
        In_Order(root->left);
        printf("%d ", root->data);
        In_Order(root->right);
    }
}

int main()
{
    node* root = newNode(3);
    root->left = newNode(6);
    root->right = newNode(8);
    In_Order(root);
}