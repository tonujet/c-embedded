enum Language  {
    UA,
    US,
    UK,
    IT,
};

typedef struct {
    double price;
    unsigned int pageNumber;
    enum Language language;
    double weight;
    unsigned int publicationYear;
    char name[255];
} Book;


void printBook(void *book);
void printLanguage(enum Language l);
