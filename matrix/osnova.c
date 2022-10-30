// назови файл нормально))
#include "osnova.h"
#include <stdio.h>
// этот SIZE нам не нужен в библиотеке, он пользовательский
#define SIZE 10

// при изменение чего то используем указатели
// переменные должны как и функции именить логичное название
void fill_array(int *array, const unsigned int size)
{
    // советую привыкнуть к префиксной записи ++i
    for (unsigned int i = 0; i < size; ++i) {
        setbuf(stdin, NULL);
        scanf("%d", array + i);
    }
}
// 1 пробел после функции
// если мы ничего не меняем в аргументе луяше явно это указать - const 
// и не использовать зря указатели
void print_array(const int a[], const unsigned int size)
{
    // почему беззнаковый? потому что у нас не может быть отрицательный размер массива
    for (unsigned int i = 0; i < size; ++i) {
        // хотя бы пробел добавил для читаемости)
        printf(" %d ", a[i]);
    }
    puts("\n");
}
// - // -
// + функция возвращает минимальный элемент, а не выводит его(оставим это на пользователя)
int min_d(const int a[], const unsigned int size)
{
    // разбирали уже, лучше брать первый элемент
    int min = a[0];
    for (unsigned int i = 0; i < size; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}
// - // -
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

// почти
void reserv_d(int *array, const unsigned int size)
{
    if(size % 2 = 0) {
        // разбери
        int tmp = array[0];
    for (int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        array[i] = array[j];
        array[j] = tmp;
        tmp = array[i + 1];
    }
    } else {
       // допиши , если размер нечётный и понял
    }

}
