#ifndef CORK_DS_STACK_H
#define CORK_DS_STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct CorcStack
{
    int top, size;
    void **content;
} CorcStack;

CorcStack *corcstack_create(const int size);
void corcstack_destroy(CorcStack *s);
void *corcstack_pop(CorcStack *s);
bool corcstack_push(CorcStack *s, void *entity);

#endif
