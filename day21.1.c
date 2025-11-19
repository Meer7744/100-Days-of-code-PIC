#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                         // Get last digit

    digits = (int)log10(num);                // Count digits - 1
    first = num / (int)pow(10, digits);      // Get first digit

    // Remove the first digit and last digit
    int middle = num % (int)pow(10, digits);  // Remove first digit
    middle = middle / 10;                     // Remove last digit

    // Swap: last becomes first, first becomes last
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
