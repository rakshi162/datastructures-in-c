#include <stdio.h>
#include <stdlib.h>
char* getLine() {
    char *str = NULL;     
    int capacity = 10;   
    int length = 0;      
    int ch;
    str = (char *)malloc(capacity * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[length++] = (char)ch;
        if (length == capacity) {
            capacity *= 2;
            char *temp = (char *)realloc(str, capacity * sizeof(str));
            if (temp == NULL) {
                free(str);
                return NULL;
            }
            str = temp;
        }
    }
    str[length] = '\0';
    return str; 
}
int main() {
    printf("Enter a line of text: ");
    char *line = getLine();
    if (line == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    printf("You entered: %s\n", line);
    free(line);
    return 0;
}
