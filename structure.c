#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

void showBook(struct Book book) {
    printf("=============\n");
    printf("Titre : %s\n", book.title);
    printf("Auteur : %s\n", book.author);
    printf("Année : %d\n", book.year);
    printf("=============\n");
}

int main() {
    struct Book Book_1;
    Book_1.year = 1997;
    // Book_1.title = "Harry Potter";
    strcpy(Book_1.title, "Harry Potter");
    strcpy(Book_1.author, "JK Rowling");

    showBook(Book_1);

    return 0;
}