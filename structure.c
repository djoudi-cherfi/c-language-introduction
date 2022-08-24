#include <stdio.h>
#include <string.h>

// struct Book {
//     char title[100];
//     char author[100];
//     int year;
// };

// void showBook(struct Book book) {
//     printf("=============\n");
//     printf("Titre : %s\n", book.title);
//     printf("Auteur : %s\n", book.author);
//     printf("Année : %d\n", book.year);
//     printf("=============\n");
// }

// int main() {
//     struct Book Book_1;
//     Book_1.year = 1997;
//     // Book_1.title = "Harry Potter";
//     strcpy(Book_1.title, "Harry Potter");
//     strcpy(Book_1.author, "JK Rowling");

//     showBook(Book_1);

//     return 0;
// }

// ----------------

// struct Book {
//     char title[100];
//     char author[100];
//     int year;
// };

// typedef struct Book Book;

// void showBook(Book book) {
//     printf("=============\n");
//     printf("Titre : %s\n", book.title);
//     printf("Auteur : %s\n", book.author);
//     printf("Année : %d\n", book.year);
//     printf("=============\n");
// }

// int main() {
//     Book Book_1;
//     Book_1.year = 1997;
//     // Book_1.title = "Harry Potter";
//     strcpy(Book_1.title, "Harry Potter");
//     strcpy(Book_1.author, "JK Rowling");

//     showBook(Book_1);

//     return 0;
// }

// ----------------

// typedef struct {
//     char title[100];
//     char author[100];
//     int year;
// } Book;

// void showBook(Book book) {
//     printf("=============\n");
//     printf("Titre : %s\n", book.title);
//     printf("Auteur : %s\n", book.author);
//     printf("Année : %d\n", book.year);
//     printf("=============\n");
// }

// int main() {
//     Book Book_1;
//     Book_1.year = 1997;
//     // Book_1.title = "Harry Potter";
//     strcpy(Book_1.title, "Harry Potter");
//     strcpy(Book_1.author, "JK Rowling");
    
//     Book Book_2;
//     Book_2.year = 1943;
//     strcpy(Book_2.title, "Le Petit Prince");
//     strcpy(Book_2.author, "Antoine de Saint-Exupéry");

//     showBook(Book_1);
//     showBook(Book_2);

//     return 0;
// }

// ----------------

typedef struct {
    char title[100];
    char author[100];
    int year;
} Book;

void showBook(Book book) {
    printf("=============\n");
    printf("Titre : %s\n", book.title);
    printf("Auteur : %s\n", book.author);
    printf("Année : %d\n", book.year);
    printf("=============\n");
}

int main() {
    Book Library[100];
    int nbBook = 0;
    int i;

    Library[0].year = 1997;
    strcpy(Library[0].title, "Harry Potter");
    strcpy(Library[0].author, "JK Rowling");
    nbBook++;
    
    Library[1].year = 1943;
    strcpy(Library[1].title, "Le Petit Prince");
    strcpy(Library[1].author, "Antoine de Saint-Exupéry");
    nbBook++;

    for (i = 0; i < nbBook; i++) {
        showBook(Library[i]);
    }

    return 0;
}