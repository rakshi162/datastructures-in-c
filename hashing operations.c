#include<stdio.h>
#define size 10

int hashfunc(int key){
    return key%size;
}
int table[size];
void insert(int key){
    int index=hashfunc(key);
    int i=0;
    while(table[(index+i)%size]!=-1){
        i++;
        if(i==size){
            printf("Table full\n");
            return;
        }
    }
    table[(index+i)%size]=key;
    printf("%d inserted at index %d\n",key,index);
}
int search(int key){
    int index=hashfunc(key);
    int i=0;
    if(table[(index+i)%size]==key){
        printf("%d in index %d\n",key,(index+i)%key);
        return (index+i)%key;
    }
    for(int i=0;i<size;i++){
        if(table[i]==key){
            printf("%d in index %d\n",key,i);
            return (index+i)%key;
        }
        if(i==size){
        printf("Key not found\n");
        return 0;
        }
    }
}
void del(int key){
    if(!search(key)){
        return;
    }
    int index=search(key);
    table[index]=-1;
    printf("%d deleted\n",key);
}
void display(){
    for(int i=0;i<size;i++)
        printf("\n%d->%d\n",i,table[i]);
}
int main(){
    for(int i=0;i<size;i++){
    table[i]=-1;
    }
    insert(25);
    insert(35);
    insert(46);
    insert(10);
    del(25);
    search(35);
    display();
}
