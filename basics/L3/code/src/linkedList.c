#include <malloc.h>
#include "linkedList.h"



void pushAll(void **data, int length){
    for (int i = 0; i < length; i++) {
        push(data[i]);
    }
}

void push(void *data){
    if(head == NULL){
        head = (Node *)malloc(sizeof(Node));
        initNode(head, data);
        tail = head;
        return;
    }
    Node *prev = tail;
    tail = (Node *)malloc(sizeof(Node));
    initNode(tail, data);
    prev->next = tail;
    tail->prev = prev;
};

void* pop(){
    if(head == NULL) return NULL;
    size--;

    Node *prevTail = tail;
    tail = tail->prev;

    if (tail != NULL)tail->next = NULL;
    else {
        head = NULL;
        return NULL;
    }

    void *data = prevTail->data;
    free(prevTail);
    return data;
};

void printList(void (*toString)(void *data)){
    Node *el = (Node *) head;
    while(el != NULL){
        toString(el -> data);
        el = (Node *) el->next;
    }
};


void initNode(Node *node, void *data){
    node->data = data;
    node->index = size++;
    node->next = NULL;
    node->prev = NULL;
}



