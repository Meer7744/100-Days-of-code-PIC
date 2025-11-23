#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open/create output file
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(inputFile);
        return 1;
    }

    // Convert characters and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;   // Convert lowercase to uppercase
        }
        fputc(ch, outputFile);
    }

    printf("File processed successfully. Check output.txt.\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
