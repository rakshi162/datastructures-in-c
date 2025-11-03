#include <stdio.h>
#include <time.h>
int main() 
{
    int n;
    printf("Enter input size n: ");
    scanf("%d", &n);
    clock_t start = clock();       // Start timer
    // Quadratic operation: nested loops
    for (int i = 0; i < n; i++)
      {        // Outer loop O(n)    
        for (int j = 0; j < n; j++)                                   
        {    // Inner loop O(n)
            printf("(%d,%d) ", i, j);    
        }                
        printf("\n");
      }
    clock_t end = clock();    // End timer
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken for n=%d: %f seconds\n", n, time_taken);
    return 0;
}
