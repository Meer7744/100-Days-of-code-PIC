#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size
    printf("Enter k: ");
    scanf("%d", &k);

    // If k > n, no valid window
    if(k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    printf("First negative integer in each window: ");

    // Loop through windows
    for(int i = 0; i <= n - k; i++) {
        int found = 0;

        // Check elements inside the current window
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative found
        if(!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
