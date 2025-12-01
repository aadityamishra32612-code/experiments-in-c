#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
} Node;


Node* create_node(int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}


void insert_end(Node **head_ref, int value) {
    Node *new_node = create_node(value);
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    Node *temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}


void display_list(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list contents: ");
    Node *temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf(" -> ");
        temp = temp->next;
    }
    printf("\n");
}


void free_list(Node **head_ref) {
    Node *current = *head_ref;
    Node *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

int main(void) {
    Node *head = NULL;
    int value;
    char choice;

    printf("Simple Singly Linked List (insert at end)\n");

    do {
        printf("Enter an integer to insert: ");
        if (scanf("%d", &value) != 1) {
            
            fprintf(stderr, "Invalid input. Exiting.\n");
            free_list(&head);
            return EXIT_FAILURE;
        }
        insert_end(&head, value);

        
        printf("Add another node? (y/n): ");
        
        while ((choice = getchar()) != EOF && (choice == '\n')) { /* skip */ }
        if (choice == EOF) choice = 'n';
        
        if (choice >= 'A' && choice <= 'Z') choice = choice - 'A' + 'a';

        
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { /* flush rest */ }

    } while (choice == 'y');

    printf("\n");
    display_list(head);

    free_list(&head);
    return 0;
}
