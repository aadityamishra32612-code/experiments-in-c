#include <stdio.h>

void display() {
    static int count = 1;
    printf("Count = %d\n", count);
    count++;  
}

int main() {
    printf("First call:\n");
    display();

    printf("Second call:\n");
    display();

    printf("Third call:\n");
    display();

    return 0;
}
