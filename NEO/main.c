#include "keep.h"
#include <math.h>
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
    // matrix_t massiv_2 = create_matrix(ROWS, COLS);
    matrix_t massiv_3;
    // fill_matrix(&massiv_1);
    //  fill_matrix(&massiv_2);
    scanf_matrix(&massiv_1);
    //   scanf_matrix(&massiv_2);
    //    eq_matrix(&massiv_1, &massiv_2);//сравнение матриц
    //   transpose(&massiv_1); //поменять строки со столбцами
    //   minor_matrix(&massiv_1, i, j); //найти минор
    //   cals_cmplements(&massiv_1);    //найти минор со знаком
    //   determinant(&massiv_1); //перемножение и сумма матрицы
    //   inverse_matrix(&massiv_1); //переворот матрицы
    //  printf_matrix(&massiv_1);
    //  printf_matrix(&massiv_2);
    //  massiv_3 = mult_number(&massiv_1, ti);
    //  massiv_3 = sub_matrix(&massiv_1, &massiv_2);
    //  massiv_3 = sum_matrix(&massiv_1, &massiv_2);
    // printf_matrix(&massiv_1);
    // puts("\n");
    //  massiv_3 = mult_matrix(&massiv_1, &massiv_2);
    // massiv_3 = transpose(&massiv_1);
    // massiv_3 = minor_matrix(&massiv_1, i, j);
    // printf_matrix(&massiv_3);
    // double det = determinant(&massiv_3);
    // printf("%2.f\n", det);
    // massiv_3 = cals_complements(&massiv_1);
    massiv_3 = inverse_matrix(&massiv_1);
    printf_matrix(&massiv_3);
}