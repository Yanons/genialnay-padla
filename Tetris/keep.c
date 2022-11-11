#include "keep.h"
#include <stdio.h>
#include <stdlib.h>

matrix_t holst(const int width, const int length)
{
    matrix_t neo;
    neo.width = width;   // 10
    neo.length = length; // 20
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
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == length - 1) {
                neo.matrix[i][j] = '_';
            } else if (j == 0 || j == width - 1) {
                neo.matrix[i][j] = '|';
            }
        }
    }
    return neo;
}

matrix_t print_pole(matrix_t *pole)
{
    for (int i = 0; i < pole->length; ++i) {
        for (int j = 0; j < pole->width; ++j) {
            printf(" %c ", pole->matrix[i][j]);
        }
        puts("\n");
    }
}

matrix_t pole_figure(const int F_width, const int F_length)
{
    matrix_t figure;
    figure.width = F_width;   // 4
    figure.length = F_length; // 2
    figure.matrix = (char **)calloc(figure.length, sizeof(char *));
    for (int i = 0; i < figure.length; ++i) {
        figure.matrix[i] = (char *)calloc(figure.width, sizeof(char));
    }
    return figure;
}

void new_figura(matrix_t *figura, matrix_t *pole)
{
    for (int j = 0; j < figura->width; ++j) {
        pole->matrix[figura->matrix[0][j]][figura->matrix[1][j]] = '*';
    }
}

void vremy(matrix_t *figure, char *d) {}

void randoms(matrix_t *figure)
{
    int ran = 0 + rand() % (7 - 0 + 1);
    switch (ran) {
    case 1:
        I(figure);
        break;
    case 2:
        J(figure);
        break;
    case 3:
        L(figure);
        break;
    case 4:
        O(figure);
        break;
    case 5:
        Z(figure);
        break;
    case 6:
        T(figure);
        break;
    case 7:
        S(figure);
        break;
    }
}

void left(matrix_t *figure, matrix_t *tmp, matrix_t *pole)
{
    for (int j = 0; j < figure->width; ++j) {
        figure->matrix[1][j] = figure->matrix[1][j] - 1;
        pole->matrix[tmp->matrix[0][j]][tmp->matrix[1][j]] = ' ';
        pole->matrix[figure->matrix[0][j]][figure->matrix[1][j]] = '*';
    }
}

void right(matrix_t *figure, matrix_t *tmp, matrix_t *pole)
{
    for (int j = 0; j < figure->width; ++j) {
        figure->matrix[1][j] = figure->matrix[1][j] + 1;
        pole->matrix[tmp->matrix[0][j]][tmp->matrix[1][j]] = ' ';
        pole->matrix[figure->matrix[0][j]][figure->matrix[1][j]] = '*';
    }
}

void down(matrix_t *figure, matrix_t *tmp, matrix_t *pole)
{
    for (int j = 0; j < figure->width; ++j) {
        figure->matrix[0][j] = figure->matrix[0][j] + 1;
        pole->matrix[tmp->matrix[0][j]][tmp->matrix[1][j]] = ' ';
        pole->matrix[figure->matrix[0][j]][figure->matrix[1][j]] = '*';
    }
}

void copy(matrix_t *figure, matrix_t *tmp)
{
    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 4; ++i) {
            if (j == 0) {
                tmp->matrix[j][i] = figure->matrix[j][i];
            }
        }
    }
}

void I(matrix_t *figure)
{
    figure->matrix[0][0] = 1;
    figure->matrix[1][0] = 3;

    figure->matrix[0][1] = 1;
    figure->matrix[1][1] = 4;

    figure->matrix[0][2] = 1;
    figure->matrix[1][2] = 5;

    figure->matrix[0][3] = 1;
    figure->matrix[1][3] = 6;
}

void J(matrix_t *figure)
{
    figure->matrix[0][0] = 1;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 1;
    figure->matrix[1][1] = 5;

    figure->matrix[0][2] = 1;
    figure->matrix[1][2] = 6;

    figure->matrix[0][3] = 2;
    figure->matrix[1][3] = 6;
}

void L(matrix_t *figure)
{
    figure->matrix[0][0] = 2;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 1;
    figure->matrix[1][1] = 4;

    figure->matrix[0][2] = 1;
    figure->matrix[1][2] = 5;

    figure->matrix[0][3] = 1;
    figure->matrix[1][3] = 6;
}

void O(matrix_t *figure)
{
    figure->matrix[0][0] = 1;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 1;
    figure->matrix[1][1] = 5;

    figure->matrix[0][2] = 2;
    figure->matrix[1][2] = 4;

    figure->matrix[0][3] = 2;
    figure->matrix[1][3] = 5;
}

void Z(matrix_t *figure)
{
    figure->matrix[0][0] = 1;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 1;
    figure->matrix[1][1] = 5;

    figure->matrix[0][2] = 2;
    figure->matrix[1][2] = 5;

    figure->matrix[0][3] = 2;
    figure->matrix[1][3] = 6;
}

void T(matrix_t *figure)
{
    figure->matrix[0][0] = 2;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 2;
    figure->matrix[1][1] = 5;

    figure->matrix[0][2] = 1;
    figure->matrix[1][2] = 5;

    figure->matrix[0][3] = 2;
    figure->matrix[1][3] = 6;
}

void S(matrix_t *figure)
{
    figure->matrix[0][0] = 2;
    figure->matrix[1][0] = 4;

    figure->matrix[0][1] = 2;
    figure->matrix[1][1] = 5;

    figure->matrix[0][2] = 1;
    figure->matrix[1][2] = 5;

    figure->matrix[0][3] = 1;
    figure->matrix[1][3] = 6;
}