#ifndef LIBCAERUS_STACK_H
#define LIBCAERUS_STACK_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct Stack
{
    int top, size;
    void **content;
} Stack;

Stack *stack_create(const int size);
void stack_destroy(Stack *s);
bool stack_push(Stack *s, void *abstract);
void *stack_pop(Stack *s); 
void stack_pop_all(Stack *s);

#endif
