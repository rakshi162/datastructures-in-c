#include <stdio.h>
#include <stdlib.h>
int main() {
    int **marks;          
    int *numSubjects;     
    float *averages;    
    int students;
    int i, j;
    int topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &students);
    marks = (int **)malloc(students * sizeof(int *));
    numSubjects = (int *)malloc(students * sizeof(int));
    averages = (float *)malloc(students * sizeof(float));
    if (marks == NULL || numSubjects == NULL || averages == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < students; i++) {
        printf("\nEnter number of subjects for student %d: ", i + 1);
        scanf("%d", &numSubjects[i]);
        marks[i] = (int *)malloc(numSubjects[i] * sizeof(int));
        if (marks[i] == NULL) {
            printf("Memory allocation failed for student %d!\n", i + 1);
            return 1;
        }
       printf("Enter marks for %d subjects: ", numSubjects[i]);
        int sum = 0;
        for (j = 0; j < numSubjects[i]; j++) {
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        averages[i] = (float)sum / numSubjects[i];
    }
    for (i = 1; i < students; i++) {
        if (averages[i] > averages[topperIndex])
            topperIndex = i;
    }
    printf("\n--- Student Averages ---\n");
    for (i = 0; i < students; i++) {
        printf("Student %d: Average = %.2f\n", i + 1, averages[i]);
    }
    printf("\nTopper: Student %d with Average = %.2f\n",
           topperIndex + 1, averages[topperIndex]);
    for (i = 0; i < students; i++) {
        free(marks[i]);
    }
    free(marks);
    free(numSubjects);
    free(averages);
    return 0;
}
