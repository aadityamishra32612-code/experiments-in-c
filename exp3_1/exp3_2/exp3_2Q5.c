#include <stdio.h>

int main() {
    int i, j, k, l, limit;
    int n1, n2;

    printf("Enter the limit (e.g., 20): ");
    scanf("%d", &limit);

    printf("\nRamanujan Numbers up to %d:\n", limit);

    for (i = 1; i <= limit; i++) {
        for (j = i + 1; j <= limit; j++) {
            n1 = i*i*i + j*j*j;

            for (k = i + 1; k <= limit; k++) {
                for (l = k + 1; l <= limit; l++) {
                    n2 = k*k*k + l*l*l;

                    if (n1 == n2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}
