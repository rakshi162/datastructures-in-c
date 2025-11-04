#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("value of n= %d",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
