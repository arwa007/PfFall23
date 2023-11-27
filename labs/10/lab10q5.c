/*
* Programmer: Arwa Feroze
* Date: 14/11/2023
* Desc: timing functions
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplyAndDivide(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = (arr[i][j] * 3) / 2;
        }
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Define the sizes for the arrays
    int sizes[][2] = {{100, 100}, {500, 500}, {800, 800}};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    for (int i = 0; i < num_sizes; ++i) {
        int rows = sizes[i][0];
        int cols = sizes[i][1];

        printf("Array Size: %d x %d\n", rows, cols);

        // Timing for multiple malloc calls
        start = clock();

        int **arr_multiple_malloc = (int **)malloc(rows * sizeof(int *));
        for (int j = 0; j < rows; ++j) {
            arr_multiple_malloc[j] = (int *)malloc(cols * sizeof(int));
        }

        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for multiple malloc calls: %f seconds\n", cpu_time_used);

        // Timing for two malloc calls with pointer arithmetic
        start = clock();

        int **arr_single_malloc = (int **)malloc(rows * sizeof(int *));
        int *data = (int *)malloc(rows * cols * sizeof(int));
        for (int j = 0; j < rows; ++j) {
            arr_single_malloc[j] = data + j * cols;
        }

        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for two malloc calls (pointer arithmetic): %f seconds\n", cpu_time_used);

        // Fill arrays with random data
        for (int j = 0; j < rows; ++j) {
            for (int k = 0; k < cols; ++k) {
                arr_multiple_malloc[j][k] = rand() % 100; // Random values between 0 and 99
                arr_single_malloc[j][k] = arr_multiple_malloc[j][k];
            }
        }

        // Perform multiplication and division operations on both arrays and time it
        printf("Performing operations on arrays...\n");

        // Timing for multiple malloc calls
        start = clock();
        multiplyAndDivide(arr_multiple_malloc, rows, cols);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for operations with multiple malloc calls: %f seconds\n", cpu_time_used);

        // Timing for two malloc calls with pointer arithmetic
        start = clock();
        multiplyAndDivide(arr_single_malloc, rows, cols);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Time taken for operations with two malloc calls (pointer arithmetic): %f seconds\n", cpu_time_used);

        // Free memory
        for (int j = 0; j < rows; ++j) {
            free(arr_multiple_malloc[j]);
            free(arr_single_malloc[j]);
        }
        free(arr_multiple_malloc);
        free(arr_single_malloc);
        free(data);

        printf("\n");
    }

    return 0;
}
