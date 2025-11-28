#include <stdio.h>


long long FACT_rec(int n) {
    if (n == 0)
        return 1;
    else
        return n * FACT_rec(n - 1);
}


long long FACT_nonrec(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

    long long binomial(int n, int r) {
    long long num = FACT_rec(n);         
    long long den = FACT_nonrec(r) * FACT_nonrec(n - r); 
}

int main() {
    int n, r;

    printf("BINOMIAL COEFFICIENT CALCULATOR USING FACTORIAL FUNCTIONS\n");
    printf("---------------------------------------------------------\n");

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r must be <= n and both must be non-negative.\n");
        return 1;
    }

    printf("\nUsing recursive FACT(n) and non-recursive FACT(r) & FACT(n-r)...\n");
    printf("C(%d, %d) = %lld\n\n", n, r, binomial(n, r));

    
    printf("---------------------------------------------------------\n");
    printf("   TABLE OF BINOMIAL COEFFICIENTS (C(n, r))\n");
    printf("---------------------------------------------------------\n");
    printf("   n    r      C(n,r)\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("  %3d  %3d    %10lld\n", i, j, binomial(i, j));
        }
    }

    printf("---------------------------------------------------------\n");

    return 0;
}
