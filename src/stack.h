#ifndef LIBCAERUS_STACK_H
#define LIBCAERUS_STACK_H

#include <stdlib.h>
#include "bool.h"

typedef struct Stack
{
    int top, size;
    void **content;
} Stack;

Stack *stack_create(const int size);
void stack_destroy(Stack *s);
bool stack_push(Stack *s, void *entity);
void *stack_pop(Stack *s); 

#endif
