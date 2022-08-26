# Prise de note

## Vérifier la version du compilateur

```zsh
gcc --version

gcc -v
```

## Fonction main()

```c
// <stdlib.h> contient des informations d’en-tête pour "Mémoire Fonctions", "Allocation/Libération".
#include <stdlib.h>

// <stdio.h> contient des informations d’en-tête pour les fonctions "Entrée/Sortie" liées au fichier.
#include <stdio.h>
```

| **stdio.h**                                                                    | **stdlib.h**                                                                               |
| ------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------ |
| stdio.h signifie Standard Input Output                                         | stdlib.h signifie bibliothèque standard                                                    |
| Il contient des informations relatives aux fonctions d’entrée/sortie.          | Il contient des informations relatives à l’allocation de mémoire/aux fonctions libres.     |
| Certaines des fonctions de stdio.h sont **_printf, scanf, getc, putc, etc._**. | Certaines des fonctions de stdlib.h sont **_malloc, free, abort, exit, etc._**.            |
| stdio.h est utilisé par presque tous les programmes C.                         | stdlib.h n’est utilisé que lorsque nous devons allouer de la mémoire dans notre programme. |

## Commande pour compiler son code C vers du binaire 010101…

```zsh
gcc test.c
```

a.out = nom du fichier exécutable par défaut

---

programme = nom_du_fichier_executable

-o = output file, le chemin de l'exécutable

```zsh
gcc test.c -o programme
```

## Commande pour lire son code

```zsh
./programme
```

## Compiler et lire le code à la suite

```zsh
gcc test.c -o programme && ./programme
```

## Compiler, lire et afficher plus d'information

```zsh
gcc test.c -o programme && ./programme --std=c89 -pedantic
```

## Manuel des commandes générales

> printf, scanf, malloc, free, fopen, fclose, fgetc, fgets, fputc, fputs, fprintf...

```zsh
man nom_de_la_fonction
```
