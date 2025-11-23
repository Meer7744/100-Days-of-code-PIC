#include <stdio.h>

int main() {
    int n, target, nums[100];

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array values
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    printf("Enter target: ");
    scanf("%d", &target);

    // Brute force search for two numbers
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;  // exit once solution is found
            }
        }
    }

    // If no solution
    printf("-1 -1\n");
    return 0;
}
