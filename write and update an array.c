#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
int index=2;
int newval=66;
if(index>=0 && index<n) 
{  a[index]=newval;
 for(int i=0;i<n;i++)
   printf("%d ",a[i]);
}
else
  printf("index out of range ");
return 0;
}
