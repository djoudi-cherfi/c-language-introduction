#include <stdio.h>

int addition(int * x, int * y) {
    printf("pointer x = %p\n", x);
    printf("pointer y = %p\n", y);

    return *x + *y;
}

void swap(int * x, int * y) {
    int tmp = *x;

    *x = *y;
    *y = tmp;
}

int main() {
    int a = 3;
    int b = 2;

    // int result = addition(&a, &b);

    // printf("pointer result = %p\n", &result);
    // printf("a + b = %d\n", result);

    printf("a = %d | b = %d\n", a, b);

    swap(&a, &b);

    printf("Swap...\n");

    printf("a = %d | b = %d\n", a, b);

    return 0;
}