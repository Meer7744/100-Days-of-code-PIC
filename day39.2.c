#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
