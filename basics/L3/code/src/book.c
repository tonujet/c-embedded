#include <stdio.h>
#include "book.h"


void printBook(void *book){
    Book *b = (Book*) book;
    printf("|---------------------------->\n");
    printf("| Name: %s\n", b->name);
    printf("| Price: %.2f UAH\n", b->price);
    printf("| Pages: %d\n", b->pageNumber);
    printf("| Weight: %.2f kg\n", b->weight);
    printf("| Year %d\n", b->publicationYear);
    printLanguage(b->language);
    printf("|---------------------------->\n");
};

void printLanguage(enum Language l){
    printf("| Language: ");
    switch (l) {
        case UA:
            printf("Ukrainian");
            break;
        case IT:
            printf("Italian");
            break;
        case US:
        case UK:
            printf("English");
            break;
    }
    printf("\n");
}
