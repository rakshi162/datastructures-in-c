#include<stdio.h>
#define CAP 10
int main()
{
  int a[]={1,2,3};
int n=3;
int val=55;
if(n<CAP)
{
a[n]=val;
n++;
}
else
  printf("array is full ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
