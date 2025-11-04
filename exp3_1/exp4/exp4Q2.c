#include <stdio.h>


int globalVar = 10;

void testFunction() {
    int localVar = 5; 
    printf("Inside testFunction:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n\n", globalVar);
}

int main() {
    printf("Inside main:\n");
    printf("Global variable = %d\n", globalVar);

    testFunction();

    printf("Back in main, global variable still accessible = %d\n", globalVar);

    return 0;
}
