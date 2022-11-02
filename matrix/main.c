#include "osnova.h"
#include <stdio.h>
#define SIZE 10

int main()
{
    int array[SIZE] = {0};
    int tu_array[SIZE] = {0};
    fill_array(array, SIZE);
    fill_array(tu_array, SIZE);
    print_d(array, SIZE);
    max_d(array, SIZE);
    min_d(array, SIZE);
    bubble_sort(tu_array, SIZE);
    print_d(tu_array, SIZE);
    printf("srav = %s\n", sravnenie(array, tu_array, SIZE) ? "True" : "False");
    reserv_d(tu_array, SIZE);
    double_index(array, SIZE);
}