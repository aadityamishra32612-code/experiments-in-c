#include <stdio.h>

int main() {
    char name[50];
    float basic, da, gross;

    printf("Enter details for 100 employees:\n\n");

    for (int i = 1; i <= 100; i++) {
        printf("Employee %d:\n", i);

        printf("Enter name: ");
        scanf("%s", name);     

        printf("Enter basic pay: ");
        scanf("%f", &basic);

        da = 0.52 * basic;          
        gross = basic + da;         

        printf("Employee Name : %s\n", name);
        printf("Gross Salary  : %.2f\n\n", gross);
    }

    return 0;
}
