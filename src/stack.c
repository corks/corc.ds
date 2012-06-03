#include "stack.h"

CaerusStack *
libcaerus_stack_create(const int size)
{
    CaerusStack *s;

    if ((size <= 0) || (size > 66356))
        return NULL;

    if ((s = malloc(sizeof(CaerusStack))) == NULL)
        return NULL;

    if ((s->content = malloc(sizeof(*s->content) * size)) == NULL)
        return NULL;

    s->size = size;
    s->top  = 0;

    return s;
}

void
libcaerus_stack_destroy(CaerusStack *s)
{
    free(s->content);
    free(s);
}

bool
libcaerus_stack_push(CaerusStack *s, void *entity)
{
    if (s->top == s->size)
        return false;

    s->content[s->top++] = entity;
    return true;
}

void *
libcaerus_stack_pop(CaerusStack *s)
{
    if (s->top == 0)
        return NULL;

    return s->content[s->top--];
}
