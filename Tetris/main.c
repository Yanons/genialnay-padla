#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define width 12  //ширина
#define length 22 //длина
int main()
{
    matrix_t figura;
    int a, b = 0;
    matrix_t box;
    figura = seting();
    matrix_t osnova;
    osnova = holst(width, length); //поле
    new_figura(&figura, &osnova);
    while (a != 1) {
        printf("%d\n", b);
        print_osnova(&osnova);
        ++b;
        sleep(1);
        system("clear");
    }
}