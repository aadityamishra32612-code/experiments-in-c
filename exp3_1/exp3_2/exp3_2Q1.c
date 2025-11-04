#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;
    int choice = 1;

    while (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    }

    printf("\nCount of Positive Numbers: %d", pos);
    printf("\nCount of Negative Numbers: %d", neg);
    printf("\nCount of Zeroes: %d\n", zero);

    return 0;
}
