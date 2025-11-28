#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address A;

    printf("---- Present Address ----\n");

    strcpy(A.name, "Aaditya Mishra");
    printf("Name          : %s\n", A.name);

    strcpy(A.home_address, "123, MG Road");
    printf("Home Address  : %s\n", A.home_address);

    strcpy(A.hostel_address, "Hostel Block B");
    printf("Hostel Address: %s\n", A.hostel_address);

    strcpy(A.city, "Ranchi");
    printf("City          : %s\n", A.city);

    strcpy(A.state, "Jharkhand");
    printf("State         : %s\n", A.state);

    strcpy(A.zip, "834001");
    printf("ZIP Code      : %s\n", A.zip);

    return 0;
}
