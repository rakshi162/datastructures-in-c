#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head=NULL;
void insertbegin(int value){
  struct node* newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->next=head;
head=newnode;
}
void display(){
  struct node* temp=head;
while(temp!=NULL){
printf("%d ->",temp->data);
temp=temp->next;
}
  printf("NULL\n);
}
int main(){
  insertbegin(10);
insertbegin(20);
insertbegin(30);
display();
return 0;
}
