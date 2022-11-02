#ifndef _OSNOVA_H_
#define _OSNOVA_H_

void fill_array(int *array, const unsigned int size);
void print_d(const int array[], const unsigned int size);
int min_d(const int array[], const unsigned int size);
int max_d(const int array[], const unsigned int size);
void reserv_d(int *array, const unsigned int size);
int sravnenie(const int array[], const int tu_array[], const unsigned int size);
void bubble_sort(int *array, const unsigned int size);
int double_index(const int array[], const unsigned int size, const int b);
void rAndom(int *array, const unsigned int size);
void swap_mass(int *array_1, int *array_2, const unsigned size);
int sum_chisla(int a);
#endif // _OSNOVA_H