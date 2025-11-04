#include <stdio.h>

int main() {
    int arr[100], n, i, num, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("\nThe frequency of %d is: %d\n", num, count);

    return 0;
}
