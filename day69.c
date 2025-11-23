#include <stdio.h>

int main() {
    int n, arr[100];
    int sum = 0, expectedSum;

    // Input size
    printf("Enter n: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Formula for sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Missing number
    printf("Missing number: %d\n", expectedSum - sum);

    return 0;
}
