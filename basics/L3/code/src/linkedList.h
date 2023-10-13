#include <stdio.h>

typedef struct {
    int index;
    struct Node *next;
    struct Node *prev;
    void *data;
} Node;

Node *head = NULL;
Node *tail = NULL;
int size = 0;

void push(void *data);
void* pop();
void initNode(Node *node, void *data);
void insert(Node *node, int i);
void delete(int i);

void printList(void (*toString)(void *data));



