#ifndef LIBCAERUS_STACK_H
#define LIBCAERUS_STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct CaerusStack
{
    int top, size;
    void **content;
} CaerusStack;

CaerusStack *libcaerus_stack_create(const int size);
void libcaerus_stack_destroy(CaerusStack *s);
bool libcaerus_stack_push(CaerusStack *s, void *entity);
void *libcaerus_stack_pop(CaerusStack *s); 

#endif
