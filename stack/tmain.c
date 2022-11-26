#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    void *x;
    struct Stack *next;
} Stack;

Stack *push(Stack *st, void *x)
{
    Stack *tmp = (Stack *)calloc(1, sizeof(Stack));
    tmp->x = x;
    tmp->next = st;
    return tmp;
}

void *pop(Stack **st)
{
    void *res = 0;
    if (st != NULL) {
        res = (*st)->x;
        Stack *tmp = *st;
        *st = (*st)->next;
        free(tmp);
    }
    return res;
}

int main()
{
    Stack *st = NULL;
    st = push(st, (void *)45);
    st = push(st, (void *)55);
    printf("&st = %p st = %p next = %p\n", &st, st, st->next);
    printf("pop res = %d\n", (int *)pop(&st));
    printf("pop res = %d\n", (int *)pop(&st));

    // printf("pop res = %d\n", *(int *)pop(&st));

    // printf("pop res = %d\n", pop(st));
    // printf("&st = %p st = %p next = %p\n", &st, st, st->next);
}
