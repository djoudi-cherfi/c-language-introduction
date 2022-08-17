#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    int d;

    float e;
    float f;
    float g = 9;

    char h = 'h';

    a = 9; // dividende
    b = 2; // diviseur
    c = a / b; // quotient => 4
    d = a % b; // reste => 1

    printf("a = %d\n", a); // a = 9
    printf("b = %d\n", b); // b = 2
    printf("c = %d\n", c); // c = 4
    printf("d = %d\n", d); // d = 1
    
    printf("%d / %d = %d * %d + %d\n", a, b, b, c, d); // 9 / 2 = 2 * 4 + 1

    a = a + 2;
    printf("a = %d\n", a); // a = 11
    
    a *= 2;
    printf("a *= %d\n", a); // a *= 22

    a += 2;
    printf("a += %d\n", a); // a += 24
    
    a -= 2;
    printf("a -= %d\n", a); // a -= 22
    
    a %= 2;
    printf("a %%= %d\n", a); // a %= 0
    
    a++;
    printf("a++ = %d\n", a); // a++ = 1
    
    a--;
    printf("a-- = %d\n", a); // a-- = 0
    
    e = 9 / 2;
    f = 9. / 2;
    g /= 2;

    printf("e = %f\n", e); // e = 4.000000
    printf("f = %f\n", f); // f = 4.500000
    printf("g = %f\n", g); // f = 4.500000

    printf("h = %c (%d)\n", h, h); // h = h (104) => table ASCII

    h++;
    printf("h = %c (%d)\n", h, h); // h = i (105) => table ASCII

    h = 90 + 5 - 3 / 12;
    printf("h = %c (%d)\n", h, h); // h = _ (95) => table ASCII

    return 0;
}