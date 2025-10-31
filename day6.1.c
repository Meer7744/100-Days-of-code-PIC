#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("\n%d is even.\n", number);
    } else {
        printf("\n%d is odd.\n", number);
    }

    return 0;
}
