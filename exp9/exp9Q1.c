#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    
    fp = fopen("output.txt", "w");

    
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    
    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    
    fprintf(fp, "%s", text);

   
    fclose(fp);

    printf("File written successfully!\n");

    return 0;
}
