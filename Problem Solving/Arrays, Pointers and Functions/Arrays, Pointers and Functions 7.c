#include <stdio.h>
#include <stdlib.h>

// Function to allocate a matrix dynamically
int** allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to input matrix elements
void inputMatrix(int **matrix, int rows, int cols) {
    printf("Enter elements (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to compute transpose
int** transposeMatrix(int **matrix, int rows, int cols) {
    int **transpose = allocateMatrix(cols, rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

// Function to free allocated memory
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int **matrix = allocateMatrix(rows, cols);

    inputMatrix(matrix, rows, cols);

    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    int **transpose = transposeMatrix(matrix, rows, cols);

    printf("\nTranspose Matrix:\n");
    displayMatrix(transpose, cols, rows);

    // Free memory
    freeMatrix(matrix, rows);
    freeMatrix(transpose, cols);

    return 0;
}