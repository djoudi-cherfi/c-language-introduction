#include <stdio.h>

int main() {

    int i;

    // Exécute l'instruction tant que la condition est true
    // while (i < 10) {
    //     printf("i vaut %d\n", i);
    //     i++;
    // }

    // Exécute l'instruction tant que la condition est true et au moins une fois si elle est false
    // do {
    //     printf("i vaut %d\n", i);
    //     i++;
    // } while (i < 10);

    for (i = 0; i < 10; i++) {
        printf("i vaut %d\n", i);
    }

    printf("Boucle terminée !\n");

    return 0;
}
