#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator
    while (str[count] != '\0') {
        count++;
    }

    // fgets includes newline, so subtract it if needed
    if (count > 0 && str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
