#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value){
    if(top==MAX-1)
    printf("overflow\n");
    else
    {
        stack[++top]=value;
        printf("%d inserted\n",value);
    }
}
void pop(){
    if(top==-1)
    printf("underflow\n");
    else{
        printf("%d deleted\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1)
    printf("underflow\n");
    else
    printf("top element %d \n",stack[top]);
}
void display(){
    if(top==-1)
    printf("underflow\n");
    else
    {
        printf("stack elements:\n");
        for(int i=top;i>=0;i--)
        printf("%d ",stack[i]);
        printf("\n");
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    pop();
    display();
    peek();
}
