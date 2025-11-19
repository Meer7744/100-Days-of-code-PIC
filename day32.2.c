#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0};
    int maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count digit occurrences
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times: %d\n", maxDigit);
    printf("Occurrences: %d\n", maxCount);

    return 0;
}
