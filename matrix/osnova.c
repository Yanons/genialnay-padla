#include "osnova.h"
#include <stdio.h>
#include <stdlib.h>

// ну зачем тебе это
// у тебя универсальная функция, которая просто заполняет 1 массив (любой)
// вызови её два раза в main для двух разных массивов
void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
}

void print_d(const int array[], const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        printf(" %d ", array[i]);
    }
    puts("\n");
}

int min_d(const int array[], const unsigned int size)
{
    int min = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int max_d(const int array[], const unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

void reserv_d(int *array, const unsigned int size)
{
    int go = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        array[i] = array[j];
        array[j] = go;
        go = array[i + 1];
    }
}

int sravnenie(const int array[], const int tu_array[], const unsigned int size,
              const unsigned int dize)
{
    for (unsigned int i = 0; i < size; ++i) {
    if (array[dize] != tu_array[size]) {
        return 0;
    } else {
        return 1;
    }
}
