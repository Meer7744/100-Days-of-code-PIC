#include <stdio.h>

int main() {

    // Upper half (1, 3, 5, 7, 9 stars)
    for (int i = 1; i <= 9; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7, 5, 3, 1 stars)
    for (int i = 7; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
