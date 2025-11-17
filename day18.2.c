#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b; // Store original values for display

    // Euclidean algorithm to find HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", x, y, a);

    return 0;
}
