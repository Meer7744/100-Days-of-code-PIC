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

    printf("\nPrevious Greater Elements:\n");

    // Brute force logic
    for(int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Check left side for previous greater
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        // Print result with comma formatting
        if(i < n - 1)
            printf("%d, ", prevGreater);
        else
            printf("%d", prevGreater); // last element without comma
    }

    printf("\n");
    return 0;
}
