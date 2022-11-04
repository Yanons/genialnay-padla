#include "funcii.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ROWS 3
#define COLS 3
int main(void)
{
    // int ti = 5;
    matrix_t massiv_1 = fill_matrix(ROWS, COLS);
    matrix_t massiv_2 = fill_matrix(ROWS, COLS);
    scanf_matrix(&massiv_1);
    scanf_matrix(&massiv_2);
    printf_matrix(&massiv_1);
    printf_matrix(&massiv_2);
    sravnenie_matrix(&massiv_1, &massiv_2);
    // mnosh_matrix(&neo, ti);
    clear_matrix(&massiv_1);
    clear_matrix(&massiv_2);
}