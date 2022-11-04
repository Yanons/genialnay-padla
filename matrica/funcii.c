#include "funcii.h"
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
void scanf_matrix(matrix_t *matrix)
{
    double n = 0;
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            scanf("%lf", &n);
            matrix->matrix[i][j] = n;
        }
    }
}
void mnosh_matrix(matrix_t *matrix, int ti)
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            matrix->matrix[i][j] *= ti;
        }
    }
}
int sravnenie_matrix(matrix_t *one, matrix_t *two)
{
    int res = 0;
    if (equal_matrix(one, two)) {

        for (int i = 0; i < one->rows; ++i) {
            for (int j = 0; j < one->cols; ++j) {
                if (one->matrix[i][j] == two->matrix[i][j]) {
                } else {
                    return res;
                }
            }
        }
    } else {
        ++res;
        return res;
    }
    return 0;
}
int equal_matrix(matrix_t *one, matrix_t *two)
{
    if (one->rows == two->rows && one->cols == two->cols) {
    } else {
        return 1;
    }
    return 0;
}