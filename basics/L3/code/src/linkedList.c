#include <malloc.h>
#include "linkedList.h"

LinkedList *createLinkedList(){
    LinkedList *linkedList = malloc(sizeof(LinkedList));
    linkedList->head = NULL;
    linkedList->tail = NULL;
    linkedList->size = 0;
    return linkedList;
}

void pushAll(void **data, int length, LinkedList *l){
    for (int i = 0; i < length; i++) {
        push(data[i], l);
    }
}

void push(void *data, LinkedList *l){
    if(l->head == NULL){
        l->head = (Node *)malloc(sizeof(Node));
        _createNode(l->head, data, l);
        l->tail = l->head;
        return;
    }
    Node *prev = l->tail;
    l->tail = (Node *)malloc(sizeof(Node));
    _createNode(l->tail, data, l);
    prev->next = l->tail;
    l->tail->prev = prev;
};

void* pop(LinkedList *l){
    if(l->head == NULL) return NULL;
    l->size--;

    Node *prevTail = l->tail;
    l->tail = (Node *) l->tail->prev;

    if (l->tail != NULL)l->tail->next = NULL;
    else {
        l->head = NULL;
        return NULL;
    }

    void *data = prevTail->data;
    free(prevTail);
    return data;
};

void printList(void (*toString)(void *data), LinkedList *l){
    Node *node = l->head;
    while(node != NULL){
        toString(node -> data);
        node = (Node *) node->next;
    }
};


void _createNode(Node *node, void *data, LinkedList *l){
    node->data = data;
    node->index = l->size++;
    node->next = NULL;
    node->prev = NULL;
}

void freeList(LinkedList *l){
    Node *node = l->head;
    while (node != NULL){
        Node *prevNode = node;
        node = (Node *) node->next;
        free(prevNode);
    }
    free(l);
}



