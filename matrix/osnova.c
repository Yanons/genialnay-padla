#include <stdio.h>
#define SIZE 10
void set_d();
void print_d();
void max_d();
void min_d();
void reserv_d();

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
        printf("%d\n", a[i]);
    }
}
void min_d(int *a, int size)
{
    int min = 0;
    for (int i = 0; i < size; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
}
void max_d(int *a, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
}
void reserv_d(int *a, int size)
{
    int go[size];
    for (int i = size, j = 0; i > 0; i--, j++) {
        go[j] = a[i];
    }
    print_d(go, size);
}