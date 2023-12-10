#include <stdio.h>
#include <stdlib.h>

int** loadMatrixFromFile(char* filename, int size) {
    int row, col;
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int** matrix = (int**)malloc(size * sizeof(int*));

    for (row = 0; row < size; row++) {
        matrix[row] = (int*)malloc(size * sizeof(int));
        for (col = 0; col < size; col++) {
            if (fscanf(file, "%d", &matrix[row][col]) != 1) {
                fprintf(stderr, "Error reading matrix from file\n");
                exit(EXIT_FAILURE);
            }
            printf("Loaded value: %d\n", matrix[row][col]);  // Print loaded value
        }
    }

    fclose(file);
    return matrix;
}

int** calculateMaxValues(int** inputMatrix, int size) {
    int newSize = size / 2;
    int** resultMatrix = (int**)malloc(newSize * sizeof(int*));
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int max = inputMatrix[2 * i][2 * j];
            max = (inputMatrix[2 * i + 1][2 * j] > max) ? inputMatrix[2 * i + 1][2 * j] : max;
            max = (inputMatrix[2 * i][2 * j + 1] > max) ? inputMatrix[2 * i][2 * j + 1] : max;
            max = (inputMatrix[2 * i + 1][2 * j + 1] > max) ? inputMatrix[2 * i + 1][2 * j + 1] : max;
            resultMatrix[i][j] = max;
        }
    }

    return resultMatrix;
}

void displayMatrix(int** matrix, int size) {
    int row, col;
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    printf("Porgrammer: Arwa Feroze\nID: 23K-0022\n");
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <matrix_file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char* studentID = "0099";
    char student[10];
    printf("\nEnter student ID: ");
    scanf("%s", &student);
    int size = atoi(studentID) % 3 == 0 ? 8 : atoi(studentID) % 2 == 0 ? 4 : 2;

    int** inputMatrix = loadMatrixFromFile(argv[1], size);
    int** resultMatrix = calculateMaxValues(inputMatrix, size / 2);

    printf("\nInput Matrix:\n");
    displayMatrix(inputMatrix, size);

    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix, size / 2);

    int i;
    // Free allocated memory
    for (i = 0; i < size; i++) {
        free(inputMatrix[i]);
    }
    free(inputMatrix);

    for (i = 0; i < size / 2; i++) {
        free(resultMatrix[i]);
    }
    free(resultMatrix);

    return 0;
}

