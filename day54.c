#include <stdio.h>

int main() {
    int n, x = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    int totalSum = n * (n + 1) / 2;

    for(int i = 1; i <= n; i++) {
        // sum(1 to i) = i * (i + 1) / 2
        // sum(i to n) = totalSum - (i - 1) * i / 2
        int leftSum = i * (i + 1) / 2;
        int rightSum = totalSum - (i - 1) * i / 2;

        if(leftSum == rightSum) {
            x = i;
            break;
        }
    }

    printf("Pivot integer: %d\n", x);

    return 0;
}
