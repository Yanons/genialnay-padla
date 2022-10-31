#include "osnova.h"
#include <stdio.h>
#define SIZE 10
#define DIZE 10

int main()
{
    int array[SIZE] = {0};
    int tu_array[SIZE] = {0};
    
    fill_array(&array, SIZE);
    fill_array(&tu_array, SIZE);
    
    print_d(array, SIZE);
    print_d(tu_array, SIZE);
    
    max_d(array, SIZE);
    min_d(array, SIZE);
    
    sravnenie(array, tu_array, SIZE, DIZE);
    reserv_d(&array, SIZE);
}
