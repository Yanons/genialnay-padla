#ifndef _FUNCII_H_
#define _FUNCII_H_
typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

matrix_t fill_matrix(const int rows, const int cols);
void clear_matrix(matrix_t *matrix);
void printf_matrix(matrix_t *matrix);
void scanf_matrix(matrix_t *matrix);
void mnosh_matrix(matrix_t *matrix, int ti);
int sravnenie_matrix(matrix_t *massiv_1, matrix_t *massiv_2);
int equal_matrix(matrix_t *massiv_1, matrix_t *massiv_2);
#endif // _FUNCII_H