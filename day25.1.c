#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {        // starting number decreases each row
        for (int j = i; j <= 5; j++) {    // print numbers from i to 5
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
