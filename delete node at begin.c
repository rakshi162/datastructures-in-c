#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertend(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("memory failed");
        return;
    }
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
    head=newnode;
    return;
}
   struct node* temp=head;
   while(temp->next!=NULL){
    temp=temp->next;
   }
    temp->next=newnode;
}
void deletebegin(){
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
    struct node* temp=head;
    head=head->next;
    free(temp);
}
void display(){
    struct node* temp=head;
    if(temp==NULL){
        printf("list is empty");
        return;
    }
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    insertend(1);
    insertend(2);
    insertend(3);
    display();
    deletebegin();
    display();
}
