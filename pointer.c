#include <stdio.h>

int main() {
    int a = 10;
    int * pa = &a;

    // printf("Mon entier vaut %d\n", a);
    printf("a = %d (adresse %p)\n", a, &a);
    printf("pa => %p\n", pa);

    a = 20;
    *pa = 30;

    printf("La valeur stockée à l'adresse %p est %d\n", pa, *pa);

    return 0;
}