#include "keep.h"
#include <math.h>
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
    double n = 1;
    if (n != matrix_1->cols * matrix_1->rows) {
        for (int i = 0; i < matrix_1->rows; ++i) {
            for (int j = 0; j < matrix_1->cols; ++j) {
                matrix_1->matrix[i][j] = n;
                ++n;
            }
        }
    }
}
matrix_t mult_number(matrix_t *matrix, int ti) //умножение на число
{
    matrix_t neo = create_matrix(matrix->rows, matrix->cols);
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            neo.matrix[i][j] = matrix->matrix[i][j] * ti;
        }
    }
    return neo;
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
    int res = 1;
    if (one->rows != two->rows || one->cols != two->cols) {
        res = 0;
    }
    return res;
}
matrix_t sub_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    matrix_t neo;
    if (eq_size(matrix_1, matrix_2)) {
        neo = create_matrix(matrix_1->rows, matrix_1->cols);
        for (int i = 0; i < matrix_1->rows; ++i) {
            for (int j = 0; j < matrix_1->cols; ++j) {
                neo.matrix[i][j] =
                    matrix_1->matrix[i][j] - matrix_2->matrix[i][j];
            }
        }
    }
    return neo;
}
matrix_t sum_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    matrix_t neo;
    if (eq_size(matrix_1, matrix_2)) {
        neo = create_matrix(matrix_1->rows, matrix_1->cols);
        for (int i = 0; i < matrix_1->rows; ++i) {
            for (int j = 0; j < matrix_1->cols; ++j) {
                neo.matrix[i][j] =
                    matrix_1->matrix[i][j] + matrix_2->matrix[i][j];
            }
        }
        return neo;
    }
}
matrix_t mult_matrix(matrix_t *matrix_1, matrix_t *matrix_2)
{
    int rows = matrix_1->rows;
    int cols = matrix_1->cols;
    matrix_t neo;
    if (eq_size(matrix_1, matrix_2)) {
        neo = create_matrix(matrix_1->rows, matrix_1->cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                for (int k = 0; k < rows; ++k) {
                    neo.matrix[i][j] +=
                        matrix_1->matrix[i][k] * matrix_2->matrix[k][j];
                }
            }
        }
    }
    return neo;
}
matrix_t transpose(matrix_t *matrix)
{
    int imp = 0;
    int rows = matrix->rows;
    int cols = matrix->cols;
    matrix_t neo = create_matrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            neo.matrix[j][i] = matrix->matrix[i][j];
        }
    }
    return neo;
}

matrix_t minor_matrix(matrix_t *matrix, const int i, const int j)
{
    int a = 0, b = 0;
    matrix_t neo = create_matrix(matrix->rows - 1, matrix->cols - 1);
    for (int k = 0; k < matrix->rows; ++k) {
        if (k != i) {
            for (int l = 0; l < matrix->cols; ++l) {
                if (l != j) {
                    a = k;
                    b = l;
                    if (k > i) {
                        a = k - 1;
                    }
                    if (l > j) {
                        b = l - 1;
                    }
                    neo.matrix[a][b] = matrix->matrix[k][l];
                }
            }
        }
    }
    return neo;
}
double determinant(matrix_t *matrix)
{
    double det;
    if (matrix->rows == matrix->cols) {
        if (matrix->cols != 1) {
            det = matrix->matrix[0][0];
        } else if (matrix->cols == 2) {
            det = (matrix->matrix[0][0] * matrix->matrix[1][1]) -
                  (matrix->matrix[1][0] * matrix->matrix[0][1]);
        } else if (matrix->rows > 2) {
            matrix_t neo = create_matrix(matrix->cols, matrix->rows);
            for (int i = 1; i < matrix->cols; ++i) {
                matrix_t neo = minor_matrix(matrix, 0, i - 1);
                det += pow(-1, 1 + (double)i) * matrix->matrix[0][i - 1] *
                       determinant(&neo);
                remove_matrix(&neo);
            }
        }
    }
}
matrix_t cals_complements(matrix_t *matrix)
{
    matrix_t neo;
    if (matrix->cols == matrix->rows) {
        if (matrix->rows == 1) {
            neo = create_matrix(1, 1);
            neo.matrix[0][0] = 1;
        } else {
            neo = create_matrix(matrix->cols, matrix->rows);
            matrix_t tmp;
            for (int i = 0; i < neo.rows; ++i) {
                for (int j = 0; j < neo.cols; ++j) {
                    tmp = minor_matrix(&neo, i, j);
                    neo.matrix[i][j] =
                        pow(-1, (i + 1) + (j + 1) * determinant(&tmp));
                    remove_matrix(&tmp);
                }
            }
        }
    }
    return neo;
}
matrix_t inverse_matrix(matrix_t *matrix)
{
    matrix_t neo;
    if (matrix->cols == matrix->rows) {
        double det = determinant(matrix);
        if (det != 0) {
            matrix_t tmp = cals_complements(matrix);
            matrix_t tmp_2 = transpose(&tmp);
            neo = mult_number(&tmp_2, 1 / det);
            remove_matrix(&tmp);
            remove_matrix(&tmp_2);
        }
    }
    return neo;
}
