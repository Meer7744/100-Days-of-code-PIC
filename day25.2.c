#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        // Print leading spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
