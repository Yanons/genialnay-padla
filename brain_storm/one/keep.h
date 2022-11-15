#ifndef _KEEP_H_
#define _KEEP_H_
typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

matrix_t fill_matrix(const int rows, const int cols);
void clear_matrix(matrix_t *matrix);
void printf_matrix(matrix_t *matrix);
void plenum_matrix(matrix_t *matrix);
#endif // _KEEP_H