#include <stdio.h>

int main() {

    int nombreEntier;
    float nombreDecimal = 5.0;;
    char caractere; // 1 octet (8 bits) : -128 à 127
    // unsigned char caractere; // 1 octet (8 bits) : 0 à 255

    nombreEntier = 42; // Affectation de 42 à nombreEntier
    caractere = 'd';

    printf("Bienvenue dans notre programme !\n");

    printf("Un entier => %d\n", nombreEntier);
    printf("Un decimal => %f\n", nombreDecimal);
    printf("Un caractère => %c\n", caractere);

    // ASCII Table – Hex to ASCII Value Character Code Chart : https://www.freecodecamp.org/news/ascii-table-hex-to-ascii-value-character-code-chart-2/
    printf("Le caractère %c a la valeur %d\n", caractere, caractere);

    /* 
    Nous introduisons la fonction "sizeof" pour illustrer les notions de taille de réceptacle pour les données.
    "sizeof" attend comme argument un type et il renvoie le nombre d'octets nécessaire pour le coder dans la mémoire,
    c'est-à-dire la taille d'un réceptacle de ce type.
    
    On peut remarquer ainsi que la taille d'une donnée de type "pointeur vers" est identique quel que soit le type simple pointé.
    
    Le programme C suivant affiche la taille de chaque type simple.
    */

    printf("Nombre d'octet : %zu pour variable de type char\n", sizeof(char));
    printf("Nombre d'octet : %zu pour variable de type unsigned char\n", sizeof(unsigned char));
    printf("Nombre d'octet : %zu pour variable de type short_int\n", sizeof(short int));
    printf("Nombre d'octet : %zu pour variable de type int\n", sizeof(int));
    printf("Nombre d'octet : %zu pour variable de type long int\n", sizeof(long int));
    printf("Nombre d'octet : %zu pour variable de type float\n", sizeof(float));
    printf("Nombre d'octet : %zu pour variable de type double\n", sizeof(double));
    printf("Nombre d'octet : %zu pour adresse de type char\n", sizeof(char * ));
    printf("Nombre d'octet : %zu pour adresse de type unsigned char\n", sizeof(unsigned char * ));
    printf("Nombre d'octet : %zu pour adresse de type short_int\n", sizeof(short int * ));
    printf("Nombre d'octet : %zu pour adresse de type int\n", sizeof(int *));
    printf("Nombre d'octet : %zu pour adresse de type long int\n", sizeof(long int *));
    printf("Nombre d'octet : %zu pour adresse de type float\n", sizeof(float *));
    printf("Nombre d'octet : %zu pour adresse de type double\n", sizeof(double *));
    printf("size_t: %zu\n", sizeof (size_t));

    return 0;
}