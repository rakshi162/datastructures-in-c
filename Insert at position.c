#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5, pos, val, i;
  printf(" enter the position and value \n");
  scanf("%d%d", &pos, &val);
  for(i=n; i>pos; i--) 
      a[i] = a[i-1];
    a[pos] = val;
    n++;
    for(i=0; i<n; i++) 
      printf("%d ", a[i]);
    return 0;
}
