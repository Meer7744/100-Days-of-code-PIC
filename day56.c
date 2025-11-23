#include <stdio.h>

int main() {
    int arr[100], n;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nNext Greater Elements:\n");

    // Brute force logic
    for(int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Find next greater element to the right
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print result with comma formatting
        if(i < n - 1)
            printf("%d, ", nextGreater);
        else
            printf("%d", nextGreater); // last element without comma
    }

    printf("\n");
    return 0;
}
