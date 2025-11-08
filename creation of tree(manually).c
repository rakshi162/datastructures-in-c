#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node* left;
    struct Node* right;
};
int main()
{
    struct Node* root = malloc(sizeof(struct Node));
    struct Node* leftChild = malloc(sizeof(struct Node));
    struct Node* rightChild = malloc(sizeof(struct Node));
    root->data = 1;
    leftChild->data = 2;
    rightChild->data = 3;
    root->left = leftChild;
    root->right = rightChild;
    leftChild->left = leftChild->right = NULL;
    rightChild->left = rightChild->right = NULL;
    printf("root:%d\n",root->data);
    printf("leftChild:%d\n",root->left->data);
    printf("rightChild:%d\n",root->right->data);
    return 0;
}
