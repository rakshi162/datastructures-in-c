#include <stdio.h>
#include <time.h>
int main() 
{
    int n;
    printf("Enter number of iterations: ");
    scanf("%d", &n);
    clock_t start = clock();    // Start timer
    for (int i = 0; i < n; i++) 
    {
        printf("Hello\n");
    }
    clock_t end = clock();     // End timer
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken for %d prints: %f seconds\n", n, time_taken);
    return 0;
}
