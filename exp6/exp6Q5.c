#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void REVERSE(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(void) {
    char str[100];

    printf("Enter a string: ");

    // Use fgets instead of gets (safer). fgets reads at most sizeof(str)-1 chars.
    if (fgets(str, sizeof(str), stdin) == NULL) {
        // input error or EOF
        printf("No input.\n");
        return 1;
    }

    // Remove trailing newline, if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    REVERSE(str);  // function call

    printf("Reversed string: %s\n", str);

    return 0;
}
