#include "osnova.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        setbuf(stdin, NULL);
        scanf("%d", array + i);
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

int sravnenie(const int array[], const int tu_array[], const unsigned int size)
{
    int res = 1;
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] != tu_array[i]) {
            res = 0;
            break;
        }
    }
    return res;
}

void bubble_sort(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = (size - 1); j > 0; --j) {
            if (array[j - 1] > array[j]) {
                int tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int double_index(const int array[], const unsigned int size, const int chislo)
{
    int min = 0, mid = size / 2 - 1, max = size;
    unsigned int schet = 0;
    while (min <= max) {

        if (chislo < array[mid]) {
            mid -= mid / 2;
            if (chislo == array[mid + 1] || chislo == array[mid - 1]) {
                return mid;
            }
        } else if (chislo > array[mid]) {
            mid += mid / 2;
            if (chislo == array[mid - 1] || chislo == array[mid + 1]) {
                return mid;
            }
        } else {
            return mid;
        }
        if (schet >= size) {
            return 0;
        }
        puts("-");
        ++schet;
    }
    printf("%d", schet);
    return 0;
}
void rAndom(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; ++i) {
        array[i] = 0 + rand() % (size - 0 + 1);
    }
}
void swap_mass(int *array_1, int *array_2, const unsigned size)
{
    int tmp = 0;
    for (unsigned int i = 0; i < size - 1; ++i) {
        tmp = array_1[i];
        array_1[i] = array_2[i];
        array_2[i] = tmp;
    }
}
int sum_chisla(int a)
{
    int b = 0, c = 0;
    int summ = 0;
    while (c != 1) {
        b = a;
        a /= 10;
        summ += b - a * 10;
        if (a <= 9) {
            summ += a;
            ++c;
        }
    }
    printf("%d\n", summ);
    return 0;
}