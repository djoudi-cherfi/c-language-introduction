#include <stdio.h>

// void fillArray(int array[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         array[i] = 100 * i;
//     }
// }

void fillArray(int * array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(array + i) = 100 * i;
    }
}

int main() {
    // char string[50];
    // int a;
    int arrayInteger[5];
    int size = 5;
    int i;

    arrayInteger[0] = 14;
    arrayInteger[1] = 25;

    // printf("Valeur de arrayInteger[0] = %d\n", arrayInteger[0]);
    // printf("Valeur de arrayInteger[0] = %d\n", *(arrayInteger + 0));
    printf("Valeur de arrayInteger[0] = %d\n", *(arrayInteger));
    // printf("Valeur de arrayInteger[1] = %d\n", arrayInteger[1]);
    printf("Valeur de arrayInteger[1] = %d\n", *(arrayInteger + 1));

    // string => &(string[0])
    // arrayInteger => &(arrayInteger[0])
    // array[1] => *(array + i)

    for (i = 0; i < size; i++) {
        printf("arrayInteger[%d] = %d\n", i, arrayInteger[i]);
    }

    // fillArray(&(arrayInteger[0]), size);
    fillArray(arrayInteger, size);

    printf("=============\n");

    for (i = 0; i < size; i++) {
        // printf("arrayInteger[%d] = %d\n", i, *(arrayInteger + i));
        printf("arrayInteger[%d] = %d\n", i, arrayInteger[i]);
    }

    // printf("Pointer string : %p\n", string);
    // printf("Pointer &(string[0]) : %p\n", &(string[0]));

    // printf("Quel est votre prénom ?\n");
    // // scanf("%s", &(string[0]));
    // scanf("%s", string);

    // printf("Quel âge avez-vous ?\n");
    // scanf("%d", &a);

    // printf("Prénom => %s | Age => %d\n", string, a);

    return 0;
}