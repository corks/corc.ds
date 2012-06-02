#ifndef LIBCAERUS_STACK_H
#define LIBCAERUS_STACK_H

#include <stdlib.h>
#include "bool.h"

typedef struct Stack
{
    int top, size;
    void **content;
} Stack;

Stack *libcaerus_stack_create(const int size);
void libcaerus_stack_destroy(Stack *s);
bool libcaerus_stack_push(Stack *s, void *entity);
void *libcaerus_stack_pop(Stack *s); 

#endif
