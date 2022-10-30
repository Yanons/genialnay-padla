#include "osnova.h"
#include <stdio.h>
#define SIZE 10

void set_d(int *a, int size)
{
    for (int i = 0; i < size; i++) {
        setbuf(stdin, NULL);
        scanf("%d", a + i);
    }
}
void print_d(int *a, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d", a[i]);
    }
    puts("\n");
}
void min_d(int *a, int size)
{
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("%d\n", min);
}
void max_d(int *a, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("%d\n", max);
}
void reserv_d(int *a, int size)
{
    int go[10];
    go[0] = 0;
    for (int i = 0, j = size - 1; j > -1 || i < 0; ++i, --j) {
        go[j] = a[i];
    }
    puts("\n");
    print_d(go, size);
}