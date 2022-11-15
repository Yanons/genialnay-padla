#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ROWS 7
#define COLS 7
int main(void)
{
    matrix_t massiv = fill_matrix(ROWS, COLS);
    plenum_matrix(&massiv);
    printf_matrix(&massiv);
    clear_matrix(&massiv);
}