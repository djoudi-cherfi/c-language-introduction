#include <stdio.h>

int main() {

    int a = 10;
    int b = 10;
    int c = 10;
    int res;
    int res1;
    int res2;
    int res3;
    float d = 0.2 * 0.3;
    float e = 0.2 * 0.3;

    res = a == b; // Savoir si deux variables sont égaux, 0 => false, 1 => true

    res = (a != b); // Savoir si deux variables sont différentes, 0 => false, 1 => true

    res = (a + 1 != b);

    res = (a > b);  // Savoir si a est supérieur à b, 0 => false, 1 => true
    res = (a >= b); // Savoir si a est supérieur ou égal à b, 0 => false, 1 => true
    res = (a < b);  // Savoir si a est inférieur à b, 0 => false, 1 => true
    res = (a <= b); // Savoir si a est inférieur ou égal à b, 0 => false, 1 => true

    res = (a == b && b == c); // Savoir si a est égal à b et b est égal à c, 0 => false, 1 => true
    
    res = (a == b || b == c); // Savoir si a est égal à b ou b est égal à c, 0 => false, 1 => true
    
    res = !(a == b); // Savoir si a est égal à b et inverser le resulta, 0 => false, 1 => true

    res1 = a == b;
    res2 = b == c;
    res3 = res1 && res2;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("res = %d\n", res);
    printf("res3 = %d\n", res3);
    printf("d = %f\n", d); // Affiche 15 nombres après la virgule
    printf("e = %.15f\n", e); // Affiche 15 nombres après la virgule

    return 0;
}
