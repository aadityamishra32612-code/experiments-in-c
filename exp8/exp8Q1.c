#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("----- Pointer Demonstration -----\n");

    printf("\nInteger:\n");
    printf("Address stored in p1 = %p\n", p1);
    printf("Value of a = %d\n", a);
    printf("Value through pointer *p1 = %d\n", *p1);

    printf("\nFloat:\n");
    printf("Address stored in p2 = %p\n", p2);
    printf("Value of b = %.2f\n", b);
    printf("Value through pointer *p2 = %.2f\n", *p2);

    printf("\nCharacter:\n");
    printf("Address stored in p3 = %p\n", p3);
    printf("Value of c = %c\n", c);
    printf("Value through pointer *p3 = %c\n", *p3);

    return 0;
}
