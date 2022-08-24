#include <stdio.h>

#define TRUE 1
#define FALSE 0

// typedef type nouveau_type;
typedef int integer;
// typedef int boolean;
typedef enum { False, True } boolean;

int main() {
    integer a = 10;
    printf("a vaut %d\n", a);

    // boolean myBoolean = TRUE;
    // if (myBoolean) {
    //     printf("Hi!\n");
    // }

    boolean myBoolean = True;
    if (myBoolean) {
        printf("Hi!\n");
    }

    return 0;
}