#include<stdio.h>
#define CAP 5
int main()
{
  int a[]={1,2,3};
int n=3;
int val=4;
if (n<CAP)
{
    for(int i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
a[0]=val;
n++;
}
else
{
    printf("array is full \n");
}
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}
