#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int size = 0;
    scanf("%c", &size);
    char **matrix = (char **)calloc(size, sizeof(char *));
    for (int i = 0; i < size; ++i) {
        matrix[i] = (char *)calloc(size, sizeof(char));
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = ' ';
        }
    }
    a = size / 2;
    for (int i = 0; i < size; ++i) {
        matrix[i][a + i] = '*';
        matrix[i][a - i] = '*';
    }
    for (int i = 0; i < size; ++i) {
        puts("\n");
        for (int j = 0; j < size; ++j) {
            printf("%c", matrix[i][j]);
        }
        }
    for (int i = 0; i < size; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}