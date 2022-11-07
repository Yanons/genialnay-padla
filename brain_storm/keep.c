#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
matrix_t fill_matrix(const int rows, const int cols)
{
    matrix_t neo;
    neo.cols = cols;
    neo.rows = rows;
    neo.matrix = (double **)calloc(rows, sizeof(double *));
    for (int i = 0; i < rows; ++i) {
        neo.matrix[i] = (double *)calloc(cols, sizeof(double));
    }
    return neo;
}
void printf_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            printf(" %.2f ", matrix->matrix[i][j]);
        }
        puts("\n");
    }
}
void clear_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        free(matrix->matrix[i]);
    }
    free(matrix->matrix);
}
void plenum_matrix(matrix_t *matrix)
{
    int cols = matrix->cols;
    int rows = matrix->rows;
    int x = 0, y = 0, a = 0;
    int num = 1;
    while (a != 1) {
        if (num != rows * cols) {

            for (int i = 0 + x; i < rows - 1 - x; ++i) {
                matrix->matrix[i][0 + y] = num;
                ++num;
            }
            for (int j = 0 + y; j < cols - 1 - y; ++j) {
                puts("-");
                matrix->matrix[rows - 1 - x][j] = num;
                ++num;
                puts("+");
            }
            for (int i = rows - 1 - x; i > 0 + x; --i) {
                matrix->matrix[i][cols - 1 - y] = num;
                ++num;
            }
            for (int i = cols - 1 - y; i > 0 + y; --i) {
                matrix->matrix[0 + x][i] = num;
                ++num;
            }
            ++x;
            ++y;
        } else {
            matrix->matrix[cols - 1 - y][rows - 1 - x] = num;
            ++a;
        }
    }
    puts("----");
}
