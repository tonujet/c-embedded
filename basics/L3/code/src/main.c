#include <stdio.h>
#include "linkedList.h"
#include "book.h"

int main() {
    Book book1 = {1000, 255, UA, 2, 2003, "Hello world"};
    Book book2 = {333.3, 255, IT, 1.1, 2010, "La lingua italiana"};
    Book book3 = {80, 25, UK, 0.1, 2020, "Babyland"};
    Book book4 = {1936.1, 1000, UA, 2, 2020, "History of Ukraine"};
    Book book5 = {345, 345, US, 4, 2000, "cpp for beginers"};
    Book *books[] = {&book1, &book2, &book3, &book4, &book5};
    pushAll(books, sizeof(books) / sizeof(books[0]));

    Book *book55 = pop();
    Book *book44 = pop();
    printf("Are both the same struct?: %d\n", book44 == &book4); // true

    printList(printBook);
}






