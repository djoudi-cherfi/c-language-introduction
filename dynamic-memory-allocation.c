#include <stdio.h>
#include <stdlib.h>

int main() {
    // // Pile (stack) => Mémoire libre <= Tas (heap)

    // // int a = 10;
    // // int * pa = &a;
    // // int * pa = NULL;
    // // int * pa = (int *) malloc(sizeof(int));
    // int * pa = malloc(sizeof(int));

    // if (pa == NULL)
    // {
    //     printf("Error malloc !\n");

    //     return 1; // true => error
    // }

    // printf("Adresse de pa : %p\n", pa);
    // printf("Valeur à l'adresse pointée par pa : %d\n", *pa);

    // // Attribuer une taille
    // *pa = 10;
    
    // printf("Adresse de pa : %p\n", pa);
    // printf("Valeur à l'adresse pointée par pa : %d\n", *pa);

    // // Liberer l'espace mémoire
    // free(pa);

    // ----------------

    // int array[5];
    int n = 20;
    int * array = malloc(n * sizeof(int)); // 5 cases mémoire de 4 octets

    array[0] = 0; // *array = 0;
    array[1] = 10; // *(array + 1) = 10;
    array[2] = 20;
    array[3] = 30;
    array[4] = 40;
    
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (&array[i] > &array[4])
        {
            array[i] = 10 * i;
        }

        printf("array[%d] = %d\n", i, array[i]);
    }
    
    free(array);

    return 0; // false => pas error
}