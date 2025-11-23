#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);

    // Print initial of first name
    if(isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }

    // Print initials for middle names and detect surname start
    int surnameIndex = 0;
    for(i = 1; i < len; i++) {
        if(name[i] == ' ' && isalpha(name[i+1])) {
            surnameIndex = i + 1; // potential surname start

            // Check if this is not the last word
            // If more spaces ahead, it's still a middle name
            int j;
            int hasMoreWords = 0;
            for(j = i + 1; j < len; j++) {
                if(name[j] == ' ') {
                    hasMoreWords = 1;
                    break;
                }
            }

            if(hasMoreWords) {
                // It's still middle name
                printf("%c. ", toupper(name[i+1]));
            }
        }
    }

    // Print surname in full
    pri
