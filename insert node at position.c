#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertpos(int value, int pos){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("memory failed");
        return ;
    }
    newnode->data=value;
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return ;
    }
    struct node* temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++)
    temp=temp->next;
    if(temp==NULL){
        printf("out of range\n");
        free(newnode);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display(){
    struct node* temp=head;
    if (temp==NULL){
        printf("list is empty");
        return;
    }
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    insertpos(10,1);
    insertpos(20,2);
    insertpos(30,3);
    insertpos(15,2);
    insertpos(5,1);
    display();
}
