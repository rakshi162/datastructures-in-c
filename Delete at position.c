#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5, pos, i;
    printf("enter the position \n");
    scanf("%d", &pos);
    for(i=pos-1; i<n-1; i++) 
      a[i] = a[i+1];
    n--;
    for(i=0; i<n; i++)
      printf("%d ", a[i]);
    return 0;
}
