#include <stdio.h>

int main() {
    int a, b;
    int and_result, or_result, not_result;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    
    and_result = a & b;   
    or_result  = a | b;   
    not_result = ~a;     

    printf("\n---- Bitwise Results ----\n");
    printf("a & b (AND) = %d\n", and_result);
    printf("a | b (OR)  = %d\n", or_result);
    printf("~a (NOT)    = %d\n", not_result);

    return 0;
}
