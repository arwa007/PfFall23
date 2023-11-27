/*
* Programmer: Arwa Feroze
* Date: 14/11/2023
* Desc: a C program that dynamically allocates memory for a 2D array of integers. Write a function that accepts a pointer to a pointer to an integer and fills the 2D array with consecutive prime numbers.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void fillWithPrimes(int **arr, int rows, int cols) {
    int num = 2; // Start with the first prime number
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            while (!isPrime(num)) {
                num++;
            }
            arr[i][j] = num++;
        }
    }
}

void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; ++i) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    fillWithPrimes(arr, rows, cols);
    printf("2D array filled with consecutive prime numbers:\n");
    printArray(arr, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; ++i) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
