#include <stdio.h>


int count = 10;


void display() {
    printf("Value of global variable (in display): %d\n", count);
}


void modify() {
    count += 5;
    printf("Global variable modified (in modify): %d\n", count);
}

int main() {
    printf("Initial value of global variable (in main): %d\n", count);
    display();   
    modify();     
    display();    
    return 0;
}
