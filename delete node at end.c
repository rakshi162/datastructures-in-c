#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void deleteAtEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head_ref;
    if (temp->next == NULL) {
        free(temp);
        *head_ref = NULL;
        return;
    }
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);      
    temp->next = NULL;     
}
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    printf("Original list:\n");
    printList(head);
    deleteAtEnd(&head);
    printf("\nList after deleting last node:\n");
    printList(head);
    return 0;
}
