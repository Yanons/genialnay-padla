#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    Data data = 3;
    stack tmp;
    stack *st = &tmp;
    push(st, data);
    print_stack(st);
    data = pop(st);
    print_stack(st);
}