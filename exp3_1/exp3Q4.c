#include <stdio.h>

int main() {
    int y, leap, days;
    printf("Enter year: ");
    scanf("%d", &y);

    leap = (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    days = ((y - 1) * 365 + leap) % 7;

    printf("1st January %d is ", y);
    switch (days) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }
    return 0;
}
