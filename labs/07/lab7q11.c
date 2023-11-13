/*
*Programmer: Arwa Feroze
*Date: 24/10/2023
*Description: Find the largest value in every contiguous 3x3 matrix in the input grid.
Return the generated matrix.
*/
#include <stdio.h>

// Function to generate the maxLocal matrix
void generateMaxLocal(int n, int grid[n][n], int maxLocal[n-2][n-2]) {
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            int maxVal = grid[i-1][j-1];
            for (int x = i-1; x <= i+1; ++x) {
                for (int y = j-1; y <= j+1; ++y) {
                    if (grid[x][y] > maxVal) {
                        maxVal = grid[x][y];
                    }
                }
            }
            maxLocal[i-1][j-1] = maxVal;
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int grid[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Check if the matrix is at least 3x3
    if (n < 3) {
        printf("Error: The matrix should be at least 3x3.\n");
        return 1;
    }

    int maxLocal[n-2][n-2];

    // Generate the maxLocal matrix
    generateMaxLocal(n, grid, maxLocal);

    // Print the generated matrix
    printf("\nGenerated maxLocal matrix:\n");
    printMatrix(n-2, n-2, maxLocal);

    return 0;
}
