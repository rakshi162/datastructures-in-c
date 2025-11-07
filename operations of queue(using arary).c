#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1;
int queue[SIZE];
void enqueue(int value){
    if(rear==SIZE-1)
    printf("queue is full");
    else{
        if(front==-1)
        front = 0;
        rear++;
        queue[rear]=value;
        printf("inserted element : %d \n",value);
    }
}
void dequeue(){
    if(front==-1||front>rear)
    printf("queue is empty\n");
    else{
       printf("%d deleted\n",queue[front]);
        for(int i=front+1;i<=rear;i++)
             queue[i-1]=queue[i];
        rear--;
    }
}
void peek(){
    if(front==-1||front>rear)
    printf("queue is empty\n");
    else{
        printf("front element : %d\n",queue[front]);
    }
}
void display(){
    if(front==-1||front>rear)
    printf("queue is empty\n");
    else{
        printf("elements in queue:\n");
        for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
        printf("\n");
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    
    enqueue(3);
    display();
}
