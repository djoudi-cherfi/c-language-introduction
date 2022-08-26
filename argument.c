#include <stdio.h>

int main(int argc, char **argv) {
    // argc = argument count = nombre d'arguments
    // argv = argument vector = vecteur contenant les valeurs de nos arguments
    // char ** = tableau de chaîne de caracteres

    // printf("Nombre d'arguments : %d\n", argc);
    // printf("Argument 1 : %s\n", argv[0]);

    // ----------------

    // int i;

    // printf("Nombre d'arguments : %d\n", argc);

    // for (i = 0; i < argc; i++)
    // {
    //     printf("Argument %d : %s\n", i, argv[i]);
    // }

    // ----------------

    if (argc < 2)
    {
        printf("Utilisation du programme : %s <prenom>\n", argv[0]);

        return 1;
    }
    
    printf("Bonjour %s :-)\n", argv[1]);

    return 0;
}