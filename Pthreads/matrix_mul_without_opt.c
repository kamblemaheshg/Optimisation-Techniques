#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void matrix_multiply(int size, double A[size][size], double B[size][size], double C[size][size]) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            C[i][j] = 0.0;
            for (int k = 0; k < size; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    double (*A)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));
    double (*B)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));
    double (*C)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            A[i][j] = (double)(i + j);
            B[i][j] = (double)(i - j);
        }
    }

    matrix_multiply(SIZE, A, B, C);

    free(A);
    free(B);
    free(C);

    return 0;
}
