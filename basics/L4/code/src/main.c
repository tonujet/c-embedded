#include "stringUtils.h"
#include "ui.h"
#include "malloc.h"


// Variant 3
// 3. Привести строку до великих символів
int main(int argc, char **argv) {
    char stringInStack[255] = {0};

    /* !!!!
        * char *stringInStack = "value";
        * Doesnt work properly, because we create pointer to stack memory and don`t
        * assign length(impossible to do). That means that our future changes will be
        * applied not to our variable, but to other information stored in thr stack at the current
        * moment. Such changes will ruin our program, and we will get error exit code;
        * It is possible to do, if we allocate memory in heap, and create our stringInStack there
    */

    char *stringInHeap = malloc(255);
    while (1) {
        inputVars(stringInStack, stringInHeap);
        char *upperInStack = toUpperCase(stringInStack);
        char *upperInHeap = toUpperCase(stringInHeap);
        printResults(stringInStack, upperInStack, stringInHeap, upperInHeap);
        if (exitUI() == 1) break;
    }
    free(stringInHeap);
}

