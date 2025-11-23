#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    // If k is greater than array size, no valid subarray
    if(k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    int maxSum = 0, currentSum = 0;

    // Compute sum of first window (first k elements)
    for(int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    maxSum = currentSum;

    // Slide window
    for(int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // Output
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
