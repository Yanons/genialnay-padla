#include "osnova.h"
#include <stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {0};
    int size = SIZE;
    set_d(&a, size);
    print_d(&a, size);
    max_d(&a, size);
    min_d(&a, size);
    reserv_d(&a, size);
}