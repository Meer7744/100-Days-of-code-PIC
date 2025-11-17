#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // Use long long for large products

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }

    return 0;
}
