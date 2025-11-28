#include <stdio.h>


void modify(int *x, int *y) {
    *x = *x + 10;   
    *y = *y * 2;    
}

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    
    
    modify(&a, &b);

    printf("\nAfter modification:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
