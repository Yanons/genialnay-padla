#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define width 10  //ширина
#define length 20 //длина
#define F_width 4
#define F_length 2
int main()
{
    char d;
    int a;
    system("clear");
    matrix_t pole;
    matrix_t figure;
    matrix_t tmp;
    pole = holst(width, length);
    figure = pole_figure(F_width, F_length);
    tmp = pole_figure(F_width, F_length);
    randoms(&figure);
    new_figura(&figure, &pole);
    print_pole(&pole);
    while (a != 1) {
        // sleep(0.5);
        // copy(&figure, &tmp);
        // down(&figure, &tmp, &pole);
        system("clear");
        print_pole(&pole);
        char go = getchar();
        switch (go) {
        case 83: //низ
            copy(&figure, &tmp);
            down(&figure, &tmp, &pole);
            break;
        case 65: // лев
            copy(&figure, &tmp);
            left(&figure, &tmp, &pole);
            break;
        case 68: //прав
            copy(&figure, &tmp);
            right(&figure, &tmp, &pole);
            break;
        case 81:
            a = 1;
            break;
        default:
            break;
        }
        int a = end_line(&figure, &pole);
        if (a == 1) {
            randoms(&figure);
            new_figura(&figure, &pole);
        }
        //  sleep(0.5);
        //  copy(&figure, &tmp);
        //  down(&figure, &tmp, &pole);
        //  print_pole(&pole);
    }
}