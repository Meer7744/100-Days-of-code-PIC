#include <stdio.h>

// Function to find HCF using Euclidean algorithm
int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
