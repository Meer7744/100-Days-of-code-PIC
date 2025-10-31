#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum using a loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
