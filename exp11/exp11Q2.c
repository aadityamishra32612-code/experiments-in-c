#include <stdio.h>

int main() {
    int num, shift;
    int left_result, right_result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    
    left_result = num << shift;   
    right_result = num >> shift;  
    printf("\n--- Shift Results ---\n");
    printf("Left Shift  (num << shift)  = %d\n", left_result);
    printf("Right Shift (num >> shift)  = %d\n", right_result);

    return 0;
}
