
/*
*Programmer: Arwa Feroze
*Date: 8/12/2023
*Descrition: This C program reads a matrix from a file whose filename is provided as a command-line argument. It handles matrix dimensions of 2x2, 4x4, and 8x8 by computing the maximum value for each 2x2 submatrix and saves it into a new matrix. The program prompts for a student ID and uses it to determine the matrix size. The code consists of functions to read a matrix, calculate maximum values for submatrices, and display both input and resultant matrices.

*/

#include <stdio.h>
#include <stdlib.h>

int** readMatrix(char* filename, int matrixSize) {
    int rowIndex, colIndex;
    FILE* filePointer = fopen(filename, "r");
    if (filePointer == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int** matrix = (int**)malloc(matrixSize * sizeof(int*));

    for (rowIndex = 0; rowIndex < matrixSize; rowIndex++) {
        matrix[rowIndex] = (int*)malloc(matrixSize * sizeof(int));
        for (colIndex = 0; colIndex < matrixSize; colIndex++) {
            if (fscanf(filePointer, "%d", &matrix[rowIndex][colIndex]) != 1) {
                fprintf(stderr, "Error reading matrix from file\n");
                exit(EXIT_FAILURE);
            }
            // printf("Read value: %d\n", matrix[rowIndex][colIndex]);  // Removed print statement
        }
    }

    fclose(filePointer);
    return matrix;
}

int** calculateMaxValues(int** inputMatrix, int matrixSize) {
    int newSize = matrixSize / 2;
    int** resultMatrix = (int**)malloc(newSize * sizeof(int*));
    int i, j;

    for (i = 0; i < newSize; i++) {
        resultMatrix[i] = (int*)malloc(newSize * sizeof(int));
        for (j = 0; j < newSize; j++) {
            int max = inputMatrix[2 * i][2 * j];
            max = (inputMatrix[2 * i + 1][2 * j] > max) ? inputMatrix[2 * i + 1][2 * j] : max;
            max = (inputMatrix[2 * i][2 * j + 1] > max) ? inputMatrix[2 * i][2 * j + 1] : max;
            max = (inputMatrix[2 * i + 1][2 * j + 1] > max) ? inputMatrix[2 * i + 1][2 * j + 1] : max;
            resultMatrix[i][j] = max;
        }
    }

    return resultMatrix;
}

void displayMatrix(int** matrix, int matrixSize) {
    int i, j;
    for (i = 0; i < matrixSize; i++) {
        for (j = 0; j < matrixSize; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    printf("\nArwa Feroze\n23k-0022\n\n");
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <matrix>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
	
    const char* studentID = "0022";
    int matrixSize = atoi(studentID) % 3 == 0 ? 8 : atoi(studentID) % 2 == 0 ? 4 : 2;
    int** inputMatrix = readMatrix(argv[1], matrixSize);
    int** resultMatrix = calculateMaxValues(inputMatrix, matrixSize);

    printf("Input Matrix:\n");
    displayMatrix(inputMatrix, matrixSize);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix, matrixSize / 2);

    int i;
    for (i = 0; i < matrixSize; i++) {
        free(inputMatrix[i]);
    }
    free(inputMatrix);

    for (i = 0; i < matrixSize / 2; i++) {
        free(resultMatrix[i]);
    }
    free(resultMatrix);

    return 0;
}

