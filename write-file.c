#include <stdio.h>

int main() {
    FILE * fp = fopen("writeFile.txt", "w");
    // FILE * fp = fopen("writeFile.txt", "wx");
    // FILE * fp = fopen("writeFile.txt", "a");

    if (fp == NULL)
    {
        printf("Erreur fopen\n");

        return 1;
    }

    // fputc('a', fp);

    // ----------------

    // if (fputs("Bonjour !", fp) == EOF)
    // {
    //     printf("Erreur fputs\n");

    //     return 1;
    // }

    // ----------------
    
    char str[] = "Djood";
    int age = 40;
    
    // fprintf(fp, "Bonjour, je m'appelle %s et j'ai %d ans !\n", str, age);

    if (fprintf(fp, "Bonjour, je m'appelle %s et j'ai %d ans !\n", str, age) < 0)
    {
        printf("Erreur...");
    }
    

    fclose(fp);

    return 0;
}