#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // compute total sum
    }

    // Find pivot index
    for(int i = 0; i < n; i++) {
        // right sum = totalSum - leftSum - arr[i]
        if(leftSum == totalSum - leftSum - arr[i]) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    // If no pivot found
    printf("Pivot index: -1\n");

    return 0;
}
