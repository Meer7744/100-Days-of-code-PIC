#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap without using a third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
