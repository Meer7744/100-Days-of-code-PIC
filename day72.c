#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("File contents:\n\n");

    // Read and print lines until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}
