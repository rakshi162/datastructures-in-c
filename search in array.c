#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5, i, x, f=0;
    printf("enter the element to search");
    scanf("%d", &x);
    for(i=0; i<n; i++) 
      if(a[i]==x)
      {
        f=1;
        break;
      }
    if(f)
      printf("Found at %d", i+1);
    else 
      printf("Not found");
    return 0;
}
