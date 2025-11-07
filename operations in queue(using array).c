#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1;
int queue[SIZE];
void peek();
void display();
void enqueue(int value){
    if(rear==SIZE-1){
        printf("queue is full\n");
    }
    else{
        if(front==-1)
        front=0;
    rear++;
    queue[rear]=value;
    printf("%d inserted\n",value);
    }
}
void dequeue(){
    if(front == -1 || front>rear)
    printf("queue is empty\n");
    else{
        printf("%d deleted\n",queue[front]);
        front++;
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    peek();
    dequeue();
    peek();
    display();
}
void peek(){
    if(front==-1||front>rear)
    printf("queue is empty");
    else
    printf("front element=%d\n",queue[front]);
}
void display (){
    if(front==-1||front>rear){
        printf("queue is empty");
    }
    else {
         printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
