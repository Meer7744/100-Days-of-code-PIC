#include <stdio.h>

enum Demo {
    A = 5,
    B,
    C = 10,
    D
};

int main() {

    printf("Enum Values:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
