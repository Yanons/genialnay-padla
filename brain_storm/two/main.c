#include <stdio.h> //Ode To Billy Joe - Oscar Peterson
#include <stdlib.h>
int main()
{
    int size = 0;
    scanf("%d", &size);
    char **matrix = (char **)calloc(size, sizeof(char *));
    for (int i = 0; i < size; ++i) {
        matrix[i] = (char *)calloc(size * 2, sizeof(char));
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size * 2; ++j) {
            matrix[i][j] = ' ';
        }
    }
    for (int i = 0; i < size; ++i) {
        matrix[i][size + i] = '*';

        matrix[i][size - i] = '*';
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size * 2; ++j) {
            printf("%c", matrix[i][j]);
        }
        puts("\n");
    }
    for (int i = 0; i < size; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}