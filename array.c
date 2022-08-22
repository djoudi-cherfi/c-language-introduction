#include <stdio.h>

int main() {

    // type nom[taille];
    int tab[10];
    // int tab[3] = {10, 20, 30};
    int length = 10;
    int i;

    // int tab[n];
    // Indices : 0 à n-1

    // nom[cle/indice] = valeur;
    // tab[0] = 1;
    // tab[1] = 2;
    // tab[2] = 3;

    for (i = 0; i < length; i++) {
        tab[i] = i + 1;
    }

    for (i = 0; i < length; i++) {
        printf("Mon nombre tab[%d] vaut %d\n", i, tab[i]);
    }

    // printf("Mon nombre tab[0] vaut %d\n", tab[0]);
    // printf("Mon nombre tab[1] vaut %d\n", tab[1]);
    // printf("Mon nombre tab[2] vaut %d\n", tab[2]);

    return 0;
}
