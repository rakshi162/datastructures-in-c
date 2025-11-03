#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void append(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void deleteKthFromEnd(Node **head, int k) {
    Node *first = *head, *second = *head;
    Node *prev = NULL;
    for (int i = 0; i < k; i++) {
        if (first == NULL) {
            printf("List has fewer than %d nodes!\n", k);
            return;
        }
        first = first->next;
    }
    if (first == NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    while (first->next != NULL) {
        first = first->next;
        prev = second;
        second = second->next;
    }
    if (prev != NULL)
        prev->next = second->next;
    else
        *head = second->next;  // deleting head node
    free(second);
}
void display(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
void freeList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main() {
    Node *head = NULL;
    int n, value, k;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        append(&head, value);
    }
    printf("\nOriginal List:\n");
    display(head);
    printf("Enter k (node to delete from end): ");
    scanf("%d", &k);
    deleteKthFromEnd(&head, k);
    printf("\nList after deleting %d-th node from end:\n", k);
    display(head);
    freeList(head);
    return 0;
}
