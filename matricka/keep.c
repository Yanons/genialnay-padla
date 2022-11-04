#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
matrix_t create_matrix(const int rows, const int cols) //создание матрицы
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
void printf_matrix(matrix_t *matrix) //ввывод матрицы
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            printf(" %.2f ", matrix->matrix[i][j]);
        }
        puts("\n");
    }
}
void remove_matrix(matrix_t *matrix) //очистка матрицы
{
    for (int i = 0; i < matrix->rows; ++i) {
        free(matrix->matrix[i]);
    }
    free(matrix->matrix);
}
void scanf_matrix(matrix_t *matrix) //заполнение матрицы
{
    double n = 0;
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            scanf("%lf", &n);
            matrix->matrix[i][j] = n;
        }
    }
}
void fill_matrix(matrix_t *matrix_1)
{
    double n = matrix_1->cols * matrix_1->rows;
    for (int i = 0; i < matrix_1->rows; ++i) {
        for (int j = 0; j < matrix_1->cols; ++j) {
            matrix_1->matrix[i][j] = n;
            --n;
        }
    }
}
void mult_number(matrix_t *matrix, int ti) //умножение на число
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            matrix->matrix[i][j] *= ti;
        }
    }
}
int eq_matrix(matrix_t *one, matrix_t *two) //сравнение матриц
{
    int res = 0;
    if (eq_size(one, two)) {

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
int eq_size(matrix_t *one, matrix_t *two) //сравнение строк со столбцами
{
    if (one->rows == two->rows && one->cols == two->cols) {
    } else {
        return 1;
    }
    return 0;
}
void sub_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    for (int i = 0; i < matrix_1->rows; ++i) {
        for (int j = 0; j < matrix_1->cols; ++j) {
            matrix_1->matrix[i][j] -= matrix_2->matrix[i][j];
        }
    }
}
void sum_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    for (int i = 0; i < matrix_1->rows; ++i) {
        for (int j = 0; j < matrix_1->cols; ++j) {
            matrix_1->matrix[i][j] += matrix_2->matrix[i][j];
        }
    }
}
void mult_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    for (int i = 0; i < matrix_1->rows; ++i) {
        for (int j = 0; j < matrix_1->cols; ++j) {
            matrix_1->matrix[i][j] *= matrix_2->matrix[i][j];
        }
    }
}
void transpose(matrix_t *matrix) {}
void minor_matrix(matrix_t *matrix, const int i, const int j) {}
void cals_complements(matrix_t *matrix) {}
double determinant(matrix_t *matrix) {}
void inverse_matrix(matrix_t *matrix) {}
