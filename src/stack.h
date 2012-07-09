#ifndef CORK_DS_STACK_H
#define CORK_DS_STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct CorkStack
{
    int top, size;
    void **content;
} CorkStack;

CorkStack corkstack_create(const int size);
void corkstack_destroy(CorkStack s);
bool corkstack_push(CorkStack s, void *entity);
void *corkstack_pop(CorkStack s); 

#endif
