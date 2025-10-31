#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check using nested if–else
    if (number != 0) {
        if (number > 0) {
            printf("\n%d is positive.\n", number);
        } else {
            printf("\n%d is negative.\n", number);
        }
    } else {
        printf("\nThe number is zero.\n");
    }

    return 0;
}
