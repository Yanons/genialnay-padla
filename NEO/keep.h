#ifndef _KEEP_H_
#define _KEEP_H_
typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

matrix_t create_matrix(const int rows, const int cols);   //
void remove_matrix(matrix_t *matrix);                     //
void printf_matrix(matrix_t *matrix);                     //
void scanf_matrix(matrix_t *matrix);                      //
void mult_number(matrix_t *matrix, int ti);               //
int eq_matrix(matrix_t *massiv_1, matrix_t *massiv_2);    //
int eq_size(matrix_t *massiv_1, matrix_t *massiv_2);      //
void sum_matrix(matrix_t *massiv_1, matrix_t *massiv_2);  //
void sub_matrix(matrix_t *massiv_1, matrix_t *massiv_2);  //
void mult_matrix(matrix_t *massiv_1, matrix_t *massiv_2); //
void transpose(matrix_t *massiv_1);
void minor_matrix(matrix_t *massiv_1, const int i, const int j);
void cals_cmplements(matrix_t *massiv_1);
double determinant(matrix_t *massiv_1);
void inverse_matrix(matrix_t *massiv_1);
void fill_matrix(matrix_t *matrix_1);

#endif // _KEEP_H