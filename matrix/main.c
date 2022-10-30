#include "osnova.h"
#include <stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {0};
    // зачем переменная, если у тебя дефайн?
    //int size = SIZE;
    // не во всех функциях мы меняем массив
    set_d(&a, SIZE);
    print_d(&a, SIZE);
    max_d(&a, SIZE);
    min_d(&a, SIZE);
    reserv_d(&a, SIZE);
}
