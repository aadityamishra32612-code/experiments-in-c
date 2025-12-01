#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


Node* create_node(int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));
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
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}


int count_nodes(Node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}


void insert_middle(Node **head_ref, int value) {
    int length = count_nodes(*head_ref);
    int middle = length / 2;

    Node *new_node = create_node(value);

    
    if (*head_ref == NULL || middle == 0) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    Node *temp = *head_ref;
    for (int i = 1; i < middle; i++)
        temp = temp->next;

    new_node->next = temp->next;
    temp->next = new_node;
}


void display(Node *head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node *head = NULL;
    int n, value;

    printf("Enter number of nodes to create: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert_end(&head, value);
    }

    printf("Current list: ");
    display(head);

    printf("Enter value to insert in middle: ");
    scanf("%d", &value);

    insert_middle(&head, value);

    printf("List after inserting in the middle: ");
    display(head);

    return 0;
}
