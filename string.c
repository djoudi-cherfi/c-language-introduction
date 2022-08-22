#include <stdio.h>

int main() {
    // char string[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char string[6] = "Hello";
    int i;

    // for (i = 0; i < 6; i++) {
    //     printf("%c", string[i]);
    // }

    // printf("\n");

    string[0] = 'H';
    string[1] = 'i';
    string[2] = '!';
    string[3] = '\0';

    printf("%s\n", string);

    return 0;
}
