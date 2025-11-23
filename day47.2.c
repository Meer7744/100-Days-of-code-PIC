#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], word[50];
    int i, j = 0, maxLen = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        
        // If space, punctuation, or end of string, check the current word
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            word[j] = '\0';  // end current word
            
            if(j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0; // reset for next word
        } else {
            word[j++] = str[i];
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
