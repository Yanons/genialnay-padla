#ifndef _KEEP_H_
#define _KEEP_H_
typedef struct {
    char **matrix;
    int width;
    int length;
} matrix_t;
matrix_t holst(const int width, const int length);
matrix_t print_pole(matrix_t *pole);
matrix_t pole_figure(const int F_width, const int F_length);
void new_figura(matrix_t *figura, matrix_t *pole);
void I(matrix_t *figure);
void J(matrix_t *figure);
void L(matrix_t *figure);
void O(matrix_t *figure);
void Z(matrix_t *figure);
void T(matrix_t *figure);
void S(matrix_t *figure);
void randoms(matrix_t *figure);
void left(matrix_t *figure, matrix_t *tmp, matrix_t *pole);
void right(matrix_t *figure, matrix_t *tmp, matrix_t *pole);
void down(matrix_t *figure, matrix_t *tmp, matrix_t *pole);
void copy(matrix_t *figure, matrix_t *tmp);
int end_line(matrix_t *figure, matrix_t *pole);

#endif // _KEEP_H