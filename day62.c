#include <stdio.h>

int main() {
    int n, arr[100];

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0], currentSum = 0;

    for(int i = 0; i < n; i++) {
        currentSum += arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;

        if(currentSum < 0)
            currentSum = 0;
    }

    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
