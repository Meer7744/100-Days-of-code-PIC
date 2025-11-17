#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed are the same
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

