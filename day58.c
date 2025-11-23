#include <stdio.h>

int main() {
    int n, nums[100], answer[100];

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Fill answer[] with prefix products
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply suffix products
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Output result
    printf("\nProduct array except itself:\n");
    for(int i = 0; i < n; i++) {
        if(i < n-1)
            printf("%d, ", answer[i]);
        else
            printf("%d", answer[i]);
    }

    printf("\n");
    return 0;
}
