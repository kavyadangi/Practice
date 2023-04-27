#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* node, int value) {
    if (node == NULL) {
        return createNode(value);
    }
    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value > node->data) {
        node->right = insert(node->right, value);
    }
    return node;
}

void inorder(struct Node* node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d -> ", node->data);
    inorder(node->right);
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 5);
    insert(root, 2);
    insert(root, 8);
    insert(root, 6);
    insert(root, 9);
    insert(root, 1);
    insert(root, 4);
    insert(root, 3);

    printf("Inorder traversal of the binary tree:\n");
    inorder(root);
    return 0;
}
