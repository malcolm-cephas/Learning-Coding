

#include <stdio.h>

void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}


void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int matrix[10][10], int rows, int cols) {
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rows, cols;


    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);


    printf("Input matrix A:\n");
    inputMatrix(A, rows, cols);

    printf("Input matrix B:\n");
    inputMatrix(B, rows, cols);


    addMatrices(A, B, result, rows, cols);


    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    printf("\nResultant Matrix (A + B):\n");
    displayMatrix(result, rows, cols);

    return 0;
}
