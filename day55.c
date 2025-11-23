#include <stdio.h>

int main() {
    int nums[100], n, count = 0, candidate;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Find candidate using Boyer-Moore Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Step 2: Verify candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) {
            count++;
        }
    }

    // Check if valid majority
    if(count > n / 2) {
        printf("Majority element: %d\n", candidate);
    } else {
        printf("Majority element: -1\n");
    }

    return 0;
}
