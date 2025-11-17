#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits (supports up to 32-bit integers)
    int i = 0;

    // Input decimal number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    } else {
        int n = num; // Store original number for display

        // Convert decimal to binary
        while (num > 0) {
            binary[i] = num % 2;
            num /= 2;
            i++;
        }

        // Print binary number in reverse order
        printf("Binary of %d is: ", n);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}
