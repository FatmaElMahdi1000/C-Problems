#include"stdio.h"
#include"stdlib.h"

typedef struct node
{
    struct node* left;
    int data;
    struct node* right;

}node;

node* createNewNode(int value)
{
    node* NewNode = (node*) malloc(sizeof(node));
    NewNode->data = value;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}

//Post Order: left -> Right -> root
void PostOrderTraversal(node* root)
{
     if(root != NULL)
     {
        PostOrderTraversal(root ->left);
        PostOrderTraversal(root ->right);
        printf("%d ", root->data);
     }

}
int main()
{
    node* root = createNewNode(2);

    root->left = createNewNode(7);
    root->right = createNewNode(5);

    root->left->left = createNewNode(2);
    root->left->right = createNewNode(6);

    root->left->right->left = createNewNode(5);
    root->left->right->right = createNewNode(11);

    root->right->right = createNewNode(9);

    root->right->right->left = createNewNode(4);

    PostOrderTraversal(root);

    return 0;
}