#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // File exists → Display content
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
