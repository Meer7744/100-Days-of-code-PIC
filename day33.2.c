#include <stdio.h>

int main() {
    int n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // +1 space for new element

    printf("Enter %d elements (in sorted order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find position to insert
    pos = n;
    while (pos > 0 && arr[pos - 1] > element) {
        arr[pos] = arr[pos - 1];  // shift right
        pos--;
    }

    arr[pos] = element; // insert element

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
