#include <stdio.h>
int main() 
{
    int arr[] = {3, 7, 2, 9, 5};
    int max = arr[0];
    int *ptr = arr;
    for(int i = 1; i < 5; i++)
      {
        if(*(ptr + i) > max)
            max = *(ptr + i);
      }
    printf("Maximum element: %d\n", max);
    return 0;
}
