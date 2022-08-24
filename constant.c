#include <stdio.h>

// À la place des constantes on utilise les macros
// #define NOM VALEUR

#define ARRAY_SIZE 10
#define MAX_LENGHT_FIRSTNAME 255

int main() {
    // const int A = 10;
    // int tab[A];
    
    int tab[ARRAY_SIZE] = {1, 2, 3};
    char firstName[MAX_LENGHT_FIRSTNAME] = "Antoine";
    int i;
    
    // printf("Ma constante vaut %d\n", A);

    printf("Ma constante vaut %d\n", ARRAY_SIZE);

    printf("Nous sommes à la ligne %d\n", __LINE__);
    printf("Nous sommes dans le fichier %s\n", __FILE__);
    printf("Nous sommes le %s\n", __DATE__);
    printf("Il est %s\n", __TIME__);
    printf("ANSI standard C : %d\n", __STDC__);

    printf("%s\n", firstName);

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    return 0;
}