#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void matrix_multiply_optimized(int size, double A[size][size], double B[size][size], double C[size][size])
{
    int blockSize = 16;
    for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                            C[ii][jj] += A[ii][kk] * B[kk][jj];
                        }
                    }
                }
            }
        }
    }

    return  ;

    for (int i = 0; i < size; i += blockSize)
    {
        
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
     for (int i = 0; i < size; i += blockSize)
    {
        for (int j = 0; j < size; j += blockSize)
        {
            for (int k = 0; k < size; k += blockSize)
            {
                for (int ii = i; ii < i + blockSize && ii < size; ++ii)
                {
                    for (int jj = j; jj < j + blockSize && jj < size; ++jj)
                    {
                        for (int kk = k; kk < k + blockSize && kk < size; ++kk)
                        {
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    double(*A)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));
    double(*B)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));
    double(*C)[SIZE] = malloc(sizeof(double[SIZE][SIZE]));

    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            A[i][j] = (double)(i + j);
            B[i][j] = (double)(i - j);
        }
    }

    matrix_multiply_optimized(SIZE, A, B, C);

    free(A);
    free(B);
    free(C);

    return 0;
}
