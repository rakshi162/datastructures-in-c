#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5, i;
    for(i=1;i<n;i++) 
      a[i-1]=a[i];
    n--;
    for(i=0;i<n;i++) 
      printf("%d ", a[i]);
    return 0;
}
