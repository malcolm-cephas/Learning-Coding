

#include <stdio.h>


void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int rowA, int colA, int rowB, int colB) {
    int i,j,k;
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void inputMatrix(int matrix[10][10], int rows, int cols) {
    int i,j;
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
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
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rowA, colA, rowB, colB;


    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rowA, &colA);

    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rowB, &colB);


    if (colA != rowB) {
        printf("Matrix multiplication is not possible. The number of columns of A must be equal to the number of rows of B.\n");
        return 1;
    }


    printf("Input matrix A:\n");
    inputMatrix(A, rowA, colA);

    printf("Input matrix B:\n");
    inputMatrix(B, rowB, colB);


    multiplyMatrices(A, B, result, rowA, colA, rowB, colB);


    printf("\nMatrix A:\n");
    displayMatrix(A, rowA, colA);

    printf("\nMatrix B:\n");
    displayMatrix(B, rowB, colB);

    printf("\nResultant Matrix (A * B):\n");
    displayMatrix(result, rowA, colB);

    return 0;
}
