#include "stack.h"

CorkStack
corkstack_create(const int size)
{
    CorkStack s;

    if ((size <= 0) || (size > 66356))
        return NULL;

    if ((s.content = malloc(sizeof(*s.content) * size)) == NULL)
        return NULL;

    s.size = size;
    s.top  = 0;

    return s;
}

void
corkstack_destroy(CorkStack s)
{
    free(s.content);
}

bool
corkstack_push(CorkStack *s, void *entity)
{
    if (s.top == s.size)
        return false;

    s.content[s.top++] = entity;
    return true;
}

void *
corkstack_pop(CorkStack s)
{
    if (s.top == 0)
        return NULL;

    return s.content[s.top--];
}
