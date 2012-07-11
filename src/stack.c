#include "stack.h"

YnysStack *
ynys_stack_create(const int size)
{
    YnysStack *s;

    if ((size <= 0) || (size > 66356))
        return NULL;

    if ((s = malloc(sizeof(YnysStack))) == NULL)
        return NULL;

    if ((s->content = malloc(sizeof(*s->content) * size)) == NULL)
        return NULL;

    s->size = size;
    s->top  = 0;

    return s;
}

void
ynys_stack_destroy(YnysStack *s)
{
    free(s->content);
    free(s);
}

bool
ynys_stack_empty(YnysStack *s)
{
    return (s->top == 0);
}

bool
ynys_stack_push(YnysStack *s, void *entity)
{
    if (s->top == s->size)
        return false;

    s->content[s->top++] = entity;
    return true;
}

void *
ynys_stack_pop(YnysStack *s)
{
    if (s->top == 0)
        return NULL;

    return s->content[s->top--];
}
