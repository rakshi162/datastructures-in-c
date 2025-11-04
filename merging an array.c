#include <stdio.h>
int main() {
    int a[10]={1,3,5,7,9}, b[10]={2,4,6,8,10}, c[200], n1=5, n2=5, i, j, k=0;
    for(i=0; i<n1; i++) 
      c[k++] = a[i];
    for(j=0; j<n2; j++) 
      c[k++] = b[j];
    for(i=0; i<k; i++) 
      printf("%d ", c[i]);
    return 0;
}
