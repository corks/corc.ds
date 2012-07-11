#include "stack.h"

CorcStack *
corcstack_create(const int size)
{
    CorcStack *s;

    if ((size <= 0) || (size > 66356))
        return NULL;

    if ((s = malloc(sizeof(CorcStack))) == NULL)
        return NULL;

    if ((s->content = malloc(sizeof(*s->content) * size)) == NULL)
        return NULL;

    s->size = size;
    s->top  = 0;

    return s;
}

void
corcstack_destroy(CorcStack *s)
{
    free(s->content);
    free(s);
}

bool
corcstack_empty(CorcStack *s)
{
    return (s->top == 0);
}

bool
corcstack_push(CorcStack *s, void *entity)
{
    if (s->top == s->size)
        return false;

    s->content[s->top++] = entity;
    return true;
}

void *
corcstack_pop(CorcStack *s)
{
    if (s->top == 0)
        return NULL;

    return s->content[s->top--];
}
