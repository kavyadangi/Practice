#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node *create_node(int data)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void pre_order(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    pre_order(root->left);
    pre_order(root->right);
}

int main()
{
    Node *root = create_node(1);
    root->left = create_node(2);
    root->left->left = create_node(4);
    root->left->right = create_node(5);
    root->right = create_node(3);
    root->right->left = create_node(6);
    root->right->right = create_node(7);

    printf("Pre-order traversal of the binary tree: ");
    pre_order(root);

    return 0;
}
