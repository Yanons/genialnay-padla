#include "func.h"
#include <stdio.h>
#include <stdlib.h>

mass_t create(int all)
{
    mass_t array;
    array.all = all;
    array.mass = (int *)calloc(all, sizeof(int));
    return array;
}

void fill(mass_t *array)
{
    int all = array->all;
    for (int i = 0; i < all - 1; ++i) {
        array->mass[i] = 0 + rand() % (all - 0 + 1);
    }
}

void print_mass(mass_t *array)
{
    int all = array->all;
    for (int i = 0; i < all - 1; ++i) {
        printf("%d\n", array->mass[i]);
    }
    puts("\n");
}

int summ(mass_t *array)
{
    int mass_1;
    for (int i = 0; i < array->all; ++i) {
        mass_1 += array->mass[i];
    }
    return mass_1;
}

void match(mass_t *array, mass_t *tu_array)
{
    for (int i = 0; i < array->all; ++i) {
        for (int j = 0; j < tu_array->all; ++j) {
            if (array->mass[i] == tu_array->mass[j]) {
                printf("Схожи индексы %d=%d\n", i, j);
            }
        }
    }
    puts("\n");
}

void unions(mass_t *array, mass_t *tu_array, mass_t *thee_array)
{
    int k = 0;
    for (int i = 0; i < array->all; ++i) {
        for (int j = 0; j < array->all; ++j) {
            /*if (array->mass[i] == array->mass[j]) {
                array->mass[j] -= 15;
            }
            if (tu_array->mass[i] == tu_array->mass[j]) {
                tu_array->mass[j] -= 15;
            }*/
            if (array->mass[i] == tu_array->mass[j]) {
                tu_array->mass[i] -= 15;
                array->mass[j] -= 15;
            }
        }
    }
    for (int i = 0; i < array->all; ++i) {
        if (array->mass[i] >= 0) {
            thee_array->mass[k] = array->mass[i];
        }
        if (tu_array->mass[i] >= 0) {
            thee_array->mass[thee_array->all - k] = tu_array->mass[i];
        }
        ++k;
    }
}
void remove_matrix(mass_t *mass) //очистка матрицы
{
    free(mass);
}

void bubble_sort(mass_t *array)
{
    int all = array->all;
    for (int i = 0; i < all - 1; ++i) {
        for (int j = (all - 1); j > 0; --j) {
            if (array->mass[j - 1] > array->mass[j]) {
                int tmp = array->mass[j - 1];
                array->mass[j - 1] = array->mass[j];
                array->mass[j] = tmp;
            }
        }
    }
}
int sred(mass_t *thee_array)
{
    int summ = 0;
    for (int i = 0; i < thee_array->all; ++i) {
        summ += thee_array->mass[i];
    }
    summ /= thee_array->all;
    return summ;
}