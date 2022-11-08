#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
matrix_t holst(const int width, const int length)
{
    matrix_t neo;
    neo.width = width;
    neo.length = length;
    neo.matrix = (char **)calloc(length, sizeof(char *));
    for (int i = 0; i < length; ++i) {
        neo.matrix[i] = (char *)calloc(width, sizeof(char));
    }
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            neo.matrix[i][j] = ' ';
        }
    }

    for (int i = 0; i < length; ++i) {
        neo.matrix[i][0] = '|';
        neo.matrix[i][width - 1] = '|';
    }
    for (int i = 0; i < width; ++i) {

        neo.matrix[0][i] = '_';
        neo.matrix[length - 1][i] = '_';
    }
    return neo;
}
matrix_t print_osnova(matrix_t *osnova)
{
    for (int i = 0; i < osnova->length; ++i) {
        for (int j = 0; j < osnova->width; ++j) {
            printf("%c", osnova->matrix[i][j]);
        }
        puts("\n");
    }
}
matrix_t seting()
{
    matrix_t box;
    box.width = 12;
    box.length = 4;
    box.matrix = (char **)calloc(box.length, sizeof(char *));
    for (int i = 0; i < box.length; ++i) {
        box.matrix[i] = (char *)calloc(box.width, sizeof(char));
    }
    box.matrix[1][5] = '*';
    box.matrix[1][6] = '*';
    box.matrix[2][5] = '*';
    box.matrix[2][6] = '*';
    return box;
}
void new_figura(matrix_t *figura, matrix_t *osnova)
{
    for (int i = 1; i < 3; ++i) {
        for (int j = 1; j < osnova->width - 1; ++j) {
            osnova->matrix[i][j] = figura->matrix[i][j];
        }
    }
}