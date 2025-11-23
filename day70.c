#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    // Input string
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    int i = 0;

    // Convert entire string to lowercase first
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    // Capitalize first non-space character
    i = 0;
    while (str[i] == ' ')
        i++;

    if (str[i] != '\0')
        str[i] = toupper(str[i]);

    // Output result
    printf("Sentence case: %s\n", str);

    return 0;
}
