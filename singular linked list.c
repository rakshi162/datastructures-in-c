#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node *head=NULL;
struct node* create(int value)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    
    newnode->data = value;
    newnode->link = NULL;
    printf("Node created with value: %d\n", newnode->data);
    return newnode;
}
int main()
{
    head = create(70);
    head->link = create(80);
    head->link->link = create(90);
    head->link->link->link = create(100);
    return 0;
}
