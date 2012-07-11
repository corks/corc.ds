#ifndef CORK_DS_STACK_H
#define CORK_DS_STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct YnysStack
{
    int top, size;
    void **content;
} YnysStack;

YnysStack *ynys_stack_create(const int size);
void ynys_stack_destroy(YnysStack *s);
void *ynys_stack_pop(YnysStack *s);
bool ynys_stack_push(YnysStack *s, void *entity);

#endif
