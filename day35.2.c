#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    k = k % n;  // To avoid unnecessary full rotations

    // Temporary array to store rotated result
    int temp[n];

    int index = 0;

    // Copy last k elements first
    for (int i = n - k; i < n; i++) {
        temp[index++] = arr[i];
    }

    // Copy first n-k elements
    for (int i = 0; i < n - k; i++) {
        temp[index++] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
