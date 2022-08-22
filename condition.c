#include <stdio.h>

int main() {

    int a = 10;
    int b = 11;
    int c = 11;
    int res1;
    int res2;
    int res3;
    int res4;
    
    res1 = a == b; // Faux
    res2 = b == c; // vrai
    res3 = res1 && res2; // Faux && Vrai
    res4 = res1 || res2; // Vrai

    // if (res4) {
    //     printf("La condition est vraie\n");
    // } else {
    //     printf("La condition est fausse\n");
    // }

    // if (a == b) {
    //     printf("La condition est vraie a == b\n");
    // } else if (b == c) {
    //     printf("La condition est vraie b == c\n");
    // } else {
    //     printf("La condition est fausse\n");
    // }

    // if (a < b) {
    //     if (b == c) {
    //         printf("1.1 - La condition est vraie\n");

    //         if (a < c) {
    //             printf("1.1.1 - La condition est vraie\n");
    //         }
    //     }
    //     printf("1 - La condition est vraie\n");
    // } else if (b == c) {
    //     printf("2 - La condition est vraie\n");
    // } else if (b == c) {
    //     printf("3 - La condition est vraie\n");
    // } else if (b == c) {
    //     printf("4 - La condition est vraie\n");
    // } else {
    //     printf("5 - La condition est fausse\n");
    // }

    switch (a) {
        case 0:
            printf("a vaut 0\n");
            break;

        case 5:
            printf("a vaut 5\n");
            break;

        case 10:
            printf("a vaut 10\n");
            break;
            
        default:
            printf("Aucune idée de la valeur de a\n");
    }

    return 0;
}
