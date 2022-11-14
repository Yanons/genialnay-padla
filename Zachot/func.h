#ifndef _FUNC_H_
#define _FUNC_H_
typedef struct {
    int *mass;
    int all;
} mass_t;
mass_t create(int all);
void fill(mass_t *array);
void print_mass(mass_t *array);
void bubble_sort(mass_t *array);
int summ(mass_t *array);
void match(mass_t *array, mass_t *tu_array);
void unions(mass_t *array, mass_t *tu_array, mass_t *thee_array);
int sred(mass_t *thee_array);
#endif