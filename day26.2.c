#include <stdio.h>

int main() {

    int stars[] = {1, 3, 5, 3, 1};  // pattern structure
    int n = 5;  // number of blocks

    for (int i = 0; i < n; i++) {

        // Print stars for the block
        for (int j = 0; j < stars[i]; j++) {
            printf("*\n");
        }

        // Print blank line after each block except the last
        if (i != n - 1)
            printf("\n");
    }

    return 0;
}
