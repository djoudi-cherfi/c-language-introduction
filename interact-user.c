#include <stdio.h>

int main() {
    char firstName[50];
    int age;

    printf("Comment vous appelez-vous ?\n");
    scanf("%s", firstName);

    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);

    printf("Vous vous appelez %s et vous avez %d ans\n", firstName, age);

    if (age >= 21) {
        printf("Vous êtes majeur !\n");
    } else if (age >= 18) {
        printf("Vous êtes majeur ! (mais pas aux USA :p)\n");
    } else {
        printf("Vous êtes mineur !\n");
    }

    return 0;
}
