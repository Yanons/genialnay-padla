#include "osnova.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, int *tu_array, const unsigned int size)
{
    puts("первый массив");
    for (unsigned int i = 0; i < size; ++i) {
        setbuf(stdin, NULL);
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
    puts("второй массив");
    for (unsigned int i = 0; i < size; ++i) {
        setbuf(stdin, NULL);
        scanf("%d", tu_array + i);
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
    if (size % 2 == 0) {
        int go = array[0];
        for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
            array[i] = array[j];
            array[j] = go;
            go = array[i + 1];
        }
    } else {
        int go = array[0];
        for (unsigned int i = 0, j = size - 1; i < size / 2 + 1; ++i, --j) {
            array[i] = array[j];
            array[j] = go;
            go = array[i + 1];
        }
    }
}
void sravnenie(int *array, int *tu_array, const unsigned int size)
{
    puts("Сравнение");
    int oshibka = 0;
    // int massiv1 = array[0];
    // int massiv2 = tu_array[0];
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] == tu_array[i]) {
        } else {
            oshibka += 1;
        }
    }
    if (oshibka > 0) {
        printf("Эти массивы разняться на %d индекса", oshibka);
    } else {
        puts("\nСхожи на все 100");
    }
}