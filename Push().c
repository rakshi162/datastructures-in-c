#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *data;       
    int size;      
    int capacity;    
} DynamicArray;
void initArray(DynamicArray *arr, int initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initialCapacity;
}
void push(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        arr->capacity *= 2; // double capacity
        int *temp = (int *)realloc(arr->data, arr->capacity * sizeof(int));
        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            free(arr->data);
            exit(1);
        }
        arr->data = temp;
    }
    arr->data[arr->size++] = value;
}
void printArray(DynamicArray *arr) {
    printf("Array elements: ");
    for (int i = 0; i < arr->size; i++)
        printf("%d ", arr->data[i]);
    printf("\n");
}
void freeArray(DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = arr->capacity = 0;
}
int main() {
    DynamicArray arr;
    int n, val;
    initArray(&arr, 2);
    printf("How many numbers to insert? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &val);
        push(&arr, val);
        printf("Added %d (size=%d, capacity=%d)\n", val, arr.size, arr.capacity);
    }
    printArray(&arr);
    freeArray(&arr);
    return 0;
}
