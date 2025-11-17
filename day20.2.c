#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // Assuming max 64-bit binary input

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Calculate 1's complement
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1; // Exit program due to invalid input
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
