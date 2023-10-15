#include <stdio.h>
#include "linkedList.h"
#include "book.h"

int main() {
    LinkedList *list = createLinkedList();

    Book book1 = {1000, 255, UA, 2, 2003, "Hello world"};
    Book book2 = {333.3, 255, IT, 1.1, 2010, "La lingua italiana"};
    Book book3 = {80, 25, UK, 0.1, 2020, "Babyland"};
    Book book4 = {1936.1, 1000, UA, 2, 2020, "History of Ukraine"};
    Book book5 = {345, 345, US, 4, 2000, "cpp for beginers"};
    Book *books[] = {&book1, &book2, &book3, &book4, &book5};
    pushAll(books, sizeof(books) / sizeof(books[0]), list);

    Book *book55 = pop(list);
    Book *book44 = pop(list);
    printf("Are both the same struct?: %d\n", book44 == &book4); // true
    pushAll(books, sizeof(books) / sizeof(books[0]), list);

    printList(printBook, list);
    freeList(list);
}






