#include <stdio.h>
#include "stringUtils.h"
#include "ui.h"

void inputVars(char *stringInStack, char *stringInHeap){
    printf("Max size: 255symbols\n");

    printf("Save to stack:");

    scanf("%255s", stringInStack);
    flushInputBuffer();

    printf("Store in heap:");
    scanf("%255s", stringInHeap);
    flushInputBuffer();
}

void printResults(char *stringInStack, char *upperInStack, char *stringInHeap, char *upperInHeap){
    printf("|-----------------------------------------------------------------------------\n");
    printf("| Stack: Uppercase using pointer: %s\n", stringInStack);
    printf("| Stack: Uppercase using variable in the stack: %s\n", upperInStack);
    printf("| -----------------------------------------------------------------------------\n");
    printf("| Heap: Uppercase using first pointer it: %s\n",stringInHeap);
    printf("| Heap: Uppercase using second pointer it: %s\n", upperInHeap);
    printf("| -----------------------------------------------------------------------------\n");
}

int exitUI(){
    printf("Exit?(Y/N)");
    char c;
    scanf("%c", &c);
    flushInputBuffer();

    c = toUpperChar(c);
    printf("\n");
    if(c == 'Y') return 1;
    else if(c == 'N') return 0;
    else {
        printf("Must be Y/N\n");
        return exitUI();
    }
}

void flushInputBuffer(){
    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF);
}
