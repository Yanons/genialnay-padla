#ifndef _KEEP_H_
#define _KEEP_H_
typedef struct {
    char **matrix;
    int width;
    int length;
} matrix_t;
matrix_t holst(const int width, const int length);
matrix_t print_osnova(matrix_t *osnova);
matrix_t seting();
void new_figura(matrix_t *figura, matrix_t *osnova);
#endif // _KEEP_H