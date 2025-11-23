#include <stdio.h>

int main() {
    int n, k, arr[100];

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n) {
        printf("Invalid k! Must be between 1 and %d.\n", n);
        return 0;
    }

    // Sort array using Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // kth smallest element (1-indexed)
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
