#include <stdio.h>

int main() {
    int nums[100], n, target;
    int first = -1, last = -1;

    // Input size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter the sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter the target value: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    // Output result
    printf("First occurrence index: %d\n", first);
    printf("Last  occurrence index: %d\n", last);

    return 0;
}
