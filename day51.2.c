#include <stdio.h>

int main() {
    int arr[100], n, x;
    int index = -1;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input x
    printf("Enter value of x: ");
    scanf("%d", &x);

    // Find ceil (first element >= x)
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;
        }
    }

    // Print result
    printf("Ceil index: %d\n", index);

    return 0;
}
