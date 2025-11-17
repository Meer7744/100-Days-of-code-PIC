#include <stdio.h>

int main() {
    int num, remainder;
    unsigned long long product = 1; // To handle large products
    int hasOdd = 0; // Flag to check if there is any odd digit

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Make number positive if negative
    if (num < 0) {
        num = -num;
    }

    // Calculate product of odd digits
    while (num != 0) {
        remainder = num % 10; // Get last digit
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10; // Remove last digit
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is %llu\n", original, product);
    } else {
        printf("There are no odd digits in %d\n", original);
    }

    return 0;
}
