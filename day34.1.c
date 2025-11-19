#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shifting elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;  // Insert at the given position

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
