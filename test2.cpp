#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    int sz;
    struct Node* head;
};

struct Node* CreateNewNode(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

void InsertAtHead(struct LinkedList* list, int value) {
    struct Node* newnode = CreateNewNode(value);

    if (list->head == NULL) {
        list->head = newnode;
        list->sz++;
        return;
    }

    newnode->next = list->head;
    list->head = newnode;
    list->sz++;
}

void Traverse(struct LinkedList* list) {
    struct Node* a = list->head;
    while (a != NULL) {
        printf("%d ", a->data);
        a = a->next;
    }
    printf("\n");
}

void InsertAtAnyPosition(struct LinkedList* list, int index, int value) {
    if (index < 0 || index > list->sz) {
        return;
    }

    if (index == 0) {
        InsertAtHead(list, value);
        return;
    }

    struct Node* a = list->head;
    int curr_index = 0;
    while (curr_index != index - 1) {
        a = a->next;
        curr_index++;
    }

    struct Node* newnode = CreateNewNode(value);

    newnode->next = a->next;
    a->next = newnode;
    list->sz++;
}

void DeleteHead(struct LinkedList* list) {
    if (list->head == NULL) {
        return;
    }

    struct Node* a = list->head;
    list->head = a->next;
    free(a);
    list->sz--;
}

void DeleteAnyIndex(struct LinkedList* list, int index) {
    if (index < 0 || index >= list->sz) {
        return;
    }

    if (index == 0) {
        DeleteHead(list);
        return;
    }

    struct Node* a = list->head;
    int cur_index = 0;
    while (cur_index != index - 1) {
        a = a->next;
        cur_index++;
    }

    struct Node* b = a->next;
    a->next = b->next;
    free(b);
    list->sz--;
}


int main() {
    struct LinkedList l;
    l.head = NULL;
    l.sz = 0;

    InsertAtHead(&l, 10);
    InsertAtHead(&l, 20);
    InsertAtHead(&l, 40);
    InsertAtHead(&l, 50);
    printf("size of the list : %d\n", l.sz);

    printf("Current linked list --> ");
    Traverse(&l);

    InsertAtAnyPosition(&l, 2, 100);
    printf("After inserting at 100 at index-2 ---->   ");
    Traverse(&l);
    printf("Current size of the list :  %d\n", l.sz);

    DeleteHead(&l);
    printf("After deleting head ---->   ");

    Traverse(&l);
    printf("Current size after deleting head : %d\n", l.sz);

    DeleteAnyIndex(&l, 3);
    printf("After deleting  the value at index-3 ---->   ");
    Traverse(&l);

    return 0;
}
