#include "osnova.h"
#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE] = {0};
    fill_array(&array, SIZE);
    print_d(array, SIZE);
    max_d(array, SIZE);
    min_d(array, SIZE);
    reserv_d(&array, SIZE);
}