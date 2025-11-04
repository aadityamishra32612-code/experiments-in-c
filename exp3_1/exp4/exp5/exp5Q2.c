#include <stdio.h>

int main() {
    int arr[100], n, i;
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of Positive numbers: %d", pos);
    printf("\nCount of Negative numbers: %d", neg);
    printf("\nCount of Even numbers: %d", even);
    printf("\nCount of Odd numbers: %d\n", odd);

    return 0;
}
