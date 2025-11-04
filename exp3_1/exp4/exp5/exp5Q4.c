#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10] = {0};
    int m, n, p, q, i, j, k;

    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter Matrix A elements:\n");
    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&A[i][j]);

    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d", &p, &q);
    printf("Enter Matrix B elements:\n");
    for(i=0;i<p;i++) for(j=0;j<q;j++) scanf("%d",&B[i][j]);

    if(n != p) {
        printf("\nMatrix multiplication not possible!\n");
        return 0;
    }

    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
            for(k=0;k<n;k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("\nMatrix A:\n");
    for(i=0;i<m;i++){ for(j=0;j<n;j++) printf("%4d",A[i][j]); printf("\n"); }

    printf("\nMatrix B:\n");
    for(i=0;i<p;i++){ for(j=0;j<q;j++) printf("%4d",B[i][j]); printf("\n"); }

    printf("\nResultant Matrix (A × B):\n");
    for(i=0;i<m;i++){ for(j=0;j<q;j++) printf("%4d",C[i][j]); printf("\n"); }

    return 0;
}
