#include <stdio.h>
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct {
    int index;
    struct Node *next;
    struct Node *prev;
    void *data;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} LinkedList;

LinkedList *createLinkedList();
void pushAll(void **data, int length, LinkedList *l);
void push(void *data, LinkedList *l);
void* pop(LinkedList *l);
void _createNode(Node *node, void *data, LinkedList *l);
void insert(Node *node, int i, LinkedList *l);
void delete(int i, LinkedList *l);
void freeList(LinkedList *l);
void printList(void (*toString)(void *data), LinkedList *l);

#endif


