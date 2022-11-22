#include "keep.h"
#include <stdio.h>
#include <stdlib.h>
Data pop(stack *st)
{
    Data temp = st->stack[st->n];
    st->n--;
    return temp;
}
void push(stack *st, Data data)
{
    st->stack[st->n] = data;
    st->n++;
}
void print_stack(stack *st)
{
    for (unsigned int i = 0; i < st->n; ++i) {
        printf("%d", st->stack[i]);
    }
}