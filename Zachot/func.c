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

void unions(mass_t *array, mass_t *tu_array, mass_t *thee_array) {}
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