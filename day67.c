#include <stdio.h>

int main() {
    int m, n, arr1[100], arr2[100], merged[200];

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    // Input first sorted array
    printf("Enter first sorted array: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter second sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge process
    int i = 0, j = 0, k = 0;

    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements if any
    while(i < m) {
        merged[k++] = arr1[i++];
    }

    while(j < n) {
        merged[k++] = arr2[j++];
    }

    // Output merged sorted array
    printf("Merged sorted array: ");
    for(int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }

    printf("\n");
    return 0;
}
