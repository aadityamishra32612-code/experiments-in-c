#include <stdio.h>

int main() {
    int a = 10; 
    printf("Inside main (outer block): a = %d\n", a);

    {  
        int b = 20;  
        printf("Inside inner block: a = %d, b = %d\n", a, b);
    }  
    printf("Outside inner block: a = %d\n", a);
    

    return 0;
}
