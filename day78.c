#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file in read mode
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);   // Convert to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') {  // Check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
