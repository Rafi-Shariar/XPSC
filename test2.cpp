#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* insertHead(struct node* head, int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = head;
    return newnode;
}

void traverse(struct node* node) {
    while (node != NULL) {
        printf("%d->", node->data);
        node = node->link;
    }
    printf("\n");
}

int main() {
    struct node* head, * b, * c;
    head = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    if (head == NULL || b == NULL || c == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 5;
    b->data = 10;
    c->data = 20;
    head->link = b;
    b->link = c;
    c->link = NULL;
    printf("LinkedList: ");
    traverse(head);
    head = insertHead(head, 100);
    printf("\nLinkedList after insertion: ");
    traverse(head);
    return 0;
}
