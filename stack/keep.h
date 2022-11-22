#ifndef _KEEP_H_
#define _KEEP_H_
#define SIZE 10
typedef int Data;
typedef struct {
    Data stack[SIZE];
    unsigned int n;
} stack;
Data pop(stack *st);
void push(stack *st, Data data);
void print_stack(stack *st);

#endif // _KEEP_H