#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ROWS 3
#define COLS 3
int main(void)
{
    // int ti = 5;
    int i = 0;
    int j = 0;
    matrix_t massiv_1 = create_matrix(ROWS, COLS);
    matrix_t massiv_2 = create_matrix(ROWS, COLS);
    fill_matrix(&massiv_1);
    // fill_matrix(&massiv_2);
    //  scanf_matrix(&massiv_1);
    //  scanf_matrix(&massiv_2);
    //   eq_matrix(&massiv_1, &massiv_2);//сравнение матриц
    //   mult_number(&neo, ti);//умножение матрицы на число
    //  sub_matrix(&massiv_1, &massiv_2); //вычитание матриц
    //  mult_matrix(&massiv_1, &massiv_2); //умножение матриц
    //  sum_matrix(&massiv_1, &massiv_2); //сложение матриц
    //  transpose(&massiv_1); //поменять строки со столбцами
    //  minor_matrix(&massiv_1, i, j); //найти минор
    //  cals_cmplements(&massiv_1);    //найти минор со знаком
    //  determinant(&massiv_1); //перемножение и сумма матрицы
    //  inverse_matrix(&massiv_1); //переворот матрицы
    printf_matrix(&massiv_1);
    // printf_matrix(&massiv_2);
    remove_matrix(&massiv_1);
    // remove_matrix(&massiv_2);
}