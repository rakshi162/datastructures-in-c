#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
int index=3;
if(index>=0 && index<n)
{
printf("a[%d] = %d ", index,a[index]);
}
else
  printf("index out of range ");
return 0;
}
