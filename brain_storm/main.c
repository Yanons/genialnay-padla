#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ROWS 5
#define COLS 5
int main(void)
{
    matrix_t massiv = fill_matrix(ROWS, COLS);
    puts("-\n");
    plenum_matrix(&massiv);

    printf_matrix(&massiv);
    clear_matrix(&massiv);
}