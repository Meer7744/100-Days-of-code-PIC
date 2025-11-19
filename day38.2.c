#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int isSymmetric = 1;  // Assume symmetric initially

    // Read matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Output result
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
