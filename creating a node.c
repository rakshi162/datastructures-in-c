#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head=NULL;
int main()
{
  head=(struct node*)malloc(sizeof(struct node));
head->data=5;
head->next=NULL;
printf("the value at node is %d",head->data);
return 0;
}
