#include <stdio.h>
int main() {
    int a[10]={1,2,3,4,5}, n=5, i;
    n--;
    printf("Array after deleting last element: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
