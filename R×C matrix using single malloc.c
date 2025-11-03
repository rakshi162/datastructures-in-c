#include <stdio.h>
#include <stdlib.h>
int main() {
    int r, c, i, j;
    int *mat, *trans;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    mat = (int *)malloc(r * c * sizeof(int));
    if (mat == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter elements of the matrix (%d elements):\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", (mat + i * c + j));  // pointer arithmetic
        }
    }
    if (r == c) {
        printf("\nTranspose of the square matrix:\n");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                printf("%d ", *(mat + j * c + i));
            }
            printf("\n");
        }
    } 
    else {
        trans = (int *)malloc(c * r * sizeof(int));
        if (trans == NULL) {
            printf("Memory allocation failed for transpose!\n");
            free(mat);
            return 1;
        }
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                *(trans + j * r + i) = *(mat + i * c + j);
            }
        }
        printf("\nTranspose of the non-square matrix:\n");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                printf("%d ", *(trans + i * r + j));
            }
            printf("\n");
        }
        free(trans);
    }
    free(mat); 
    return 0;
}
