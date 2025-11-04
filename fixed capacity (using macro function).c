#include<stdio.h>
#define CAP 100
void printarray(int a[],int n);
void printarray(int a[CAP],int n){
  for(int i=0;i<n&&i<CAP;i++){
a[i]=i;
printf("%d ",a[i]);}
}
int main() {
  int a[CAP],n=150;
printarray(a,n);
}
