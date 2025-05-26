#include <iostream>
#include "stack.h"

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* head = NULL;
int nodeCount = 0;


int insertBack(int element) {
    node* current = (node*)malloc(sizeof(node));
    if (current) {
        current->data = element;
        current->next = NULL;
        if (head == NULL) head = current;
        else {
            node* previous = head;
            while (previous->next != NULL) previous = previous->next;
            previous->next = current;
        }
        nodeCount++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}


int deleteFront() {
    if (head != NULL) {
        node* current = head;
        head = head->next;
        free(current);
        nodeCount--;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int deleteBack() {
    if (nodeCount == 1) return deleteFront();

    node* previous = NULL;
    node* current = head;
    if (!current) return EXIT_FAILURE;

    while (current->next) {
        previous = current;
        current = current->next;
    }
    if (!previous) return EXIT_FAILURE;
    previous->next = NULL;
    nodeCount--;
    free(current);
    return EXIT_SUCCESS;
}


void printList(void) {
    node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int getNodesCount() { return nodeCount; }

void freeList(void) {
    while (nodeCount) deleteFront();
    head = NULL;
}