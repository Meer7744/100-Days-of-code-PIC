#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};   // frequency array for all ASCII chars
    int i;

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths differ, they cannot be anagrams
    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams.\n");
        return 0;
    }

    // Count frequency of each character in str1
    for(i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Reduce frequency based on str2
    for(i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagrams.\n");
            return 0;
        }
    }

    printf("The strings are Anagrams.\n");

    return 0;
}
