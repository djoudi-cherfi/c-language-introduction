#include <stdio.h>

/* 
Type de retour nom(parametre1, parametre2, ...) {
    Corps de la fonction
    return valeur de retour;
}
*/

void afficherBonjour() {
    printf("Bonjour !\n");
}

int square(int n) {
    return n * n;
}

int maximum(int a, int b) {
    int result;

    if (a > b) {
        result = a;
    } else {
        result = b;
    }

    return result;
}

int main() {
    int a;
    int b;
    int c;

    // afficherBonjour();

    // printf("Nombre dont vous souhaitez calculer le carré\n");
    // scanf("%d", &a);

    // printf("%d * %d = %d\n", a, a, square(a));

    printf("Première valeur :\n");
    scanf("%d", &a);

    printf("Deuxième valeur :\n");
    scanf("%d", &b);
    
    printf("Troisième valeur :\n");
    scanf("%d", &c);

    printf("Maximum entre (%d et %d) et %d : %d\n", a, b, c, maximum(maximum(a, b), c));

    return 0;
}