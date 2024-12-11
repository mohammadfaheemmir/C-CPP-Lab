// Write a program to compute addition multiplication and transpose of a 2-D array.

#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0; // Initialize result matrix cell to zero
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[ROWS][COLS];

    printf("Matrix 1:\n");
    printMatrix(mat1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2);

    // Addition of mat1 and mat2
    addMatrices(mat1, mat2, result);
    printf("\nAddition of Matrix 1 and Matrix 2:\n");
    printMatrix(result);

    // Multiplication of mat1 and mat2
    multiplyMatrices(mat1, mat2, result);
    printf("\nMultiplication of Matrix 1 and Matrix 2:\n");
    printMatrix(result);

    // Transpose of mat1
    transposeMatrix(mat1, result);
    printf("\nTranspose of Matrix 1:\n");
    printMatrix(result);

    return 0;
}
