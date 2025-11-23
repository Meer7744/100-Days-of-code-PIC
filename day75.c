#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char text[200];

    // Get filename
    printf("Enter the filename to open in append mode: ");
    scanf("%s", filename);

    // Open file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer before fgets
    getchar();  

    // Get text from user
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, file);

    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}
