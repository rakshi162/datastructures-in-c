#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** split(char *str, char delim, int *count) {
    char **tokens = NULL;    
    int tokenCount = 0;       
    int start = 0, end = 0;    
    int len = strlen(str);
    while (end <= len) {
        if (str[end] == delim || str[end]=='\0'){
            int tokenLen = end - start;
            if (tokenLen > 0) {  
                char *token = (char *)malloc((tokenLen + 1) * sizeof(char));
                if (token == NULL) {
                    printf("Memory allocation failed!\n");
                    exit(1);
                }
                strncpy(token, str + start, tokenLen);
                token[tokenLen] = '\0';
                char **temp = (char **)realloc(tokens, (tokenCount + 1) * sizeof(char *));
                if (temp == NULL) {
                    printf("Memory reallocation failed!\n");
                    free(token);
                    exit(1);
                }
                tokens = temp;
                tokens[tokenCount++] = token;
            }
            start = end + 1;  
        }
        end++;
    }
    *count = tokenCount;
    return tokens;
}
int main() {
    char str[200];
    char delim;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Enter delimiter character: ");
    scanf("%c", &delim);
    char **result = split(str, delim, &count);
    printf("\nSplit tokens (%d):\n", count);
    for (int i = 0; i < count; i++) {
        printf("[%d] %s\n", i + 1, result[i]);
        free(result[i]); 
    }
    free(result); 
    return 0;
}
