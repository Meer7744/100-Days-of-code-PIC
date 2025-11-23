#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    // Get filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy characters until EOF
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
