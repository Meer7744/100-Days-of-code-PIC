#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size
    printf("Enter k: ");
    scanf("%d", &k);

    // If k > n, no valid window exists
    if(k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    printf("Maximum in each window: ");

    // Sliding window brute-force
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];  // assume first element of window is max

        // Compare within window
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
