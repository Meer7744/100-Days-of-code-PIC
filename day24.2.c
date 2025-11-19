#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
