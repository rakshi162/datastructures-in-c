#include <stdio.h>
#include <stdlib.h>
char* my_strdup(char *src)
{
    char *dest, *ptr_src, *ptr_dest;
    int len = 0;
    for (ptr_src = src; *ptr_src != '\0'; ptr_src++)
        len++;
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return NULL; 
    ptr_src = src;
    ptr_dest = dest;
    while (*ptr_src != '\0')
      {
        *ptr_dest = *ptr_src;
        ptr_src++;
        ptr_dest++;
      }
    *ptr_dest = '\0';
    return dest;
}
int main() 
{
    char str[100];
    char *dup;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (char *p = str; *p != '\0'; p++) 
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    }
    dup = my_strdup(str);
    if (dup == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Original string: %s\n", str);
    printf("Duplicated string: %s\n", dup);
    free(dup); 
    return 0;
}
