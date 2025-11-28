#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Initial Addresses:\n");
    printf("p1 = %p (int)\n", p1);
    printf("p2 = %p (float)\n", p2);
    printf("p3 = %p (char)\n", p3);

   
    p1++;
    p2++;
    p3++;

    printf("\nAfter Increment:\n");
    printf("p1 = %p (+ %lu bytes)\n", p1, sizeof(int));
    printf("p2 = %p (+ %lu bytes)\n", p2, sizeof(float));
    printf("p3 = %p (+ %lu bytes)\n", p3, sizeof(char));

    
    p1--;
    p2--;
    p3--;

    printf("\nAfter Decrement (Back to Original):\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    return 0;
}
