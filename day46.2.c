#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // frequency array for 'a' to 'z'
    int i;
    char result = '\0';

    // Input string
    printf("Enter a string (lowercase only): ");
    fgets(str, sizeof(str), stdin);

    // Traverse and find first repeating character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if(freq[str[i] - 'a'] == 2) {
                result = str[i];
                break;
            }
        }
    }

    // Output
    if(result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
