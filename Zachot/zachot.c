#include "func.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int all = 10;
    // scanf("%d", &all);
    mass_t array = create(all);
    mass_t tu_array = create(all);
    mass_t thee_array = create(all);
    fill(&array);
    fill(&tu_array);
    int mass_1 = summ(&array);
    int mass_2 = summ(&tu_array);
    printf("Сумма двух массивов=%d\nПервый=%d\nВторой=%d\n", mass_1 + mass_2,
           mass_1, mass_2);
    match(&array, &tu_array);
    print_mass(&array);
    print_mass(&tu_array);
    unions(&array, &tu_array, &thee_array);
    bubble_sort(&thee_array);
    print_mass(&thee_array);
    int mid = sred(&thee_array);
    printf("%d", mid);
}