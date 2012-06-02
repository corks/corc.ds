#include "stack.h"

Stack *
libcaerus_stack_create(const int size)
{
    Stack *s;

    if ((s = malloc(sizeof(Stack))) == NULL)
        return NULL;

    if ((s->content = malloc(sizeof(*s->content) * size)) == NULL)
        return NULL;

    s->size = size;
    s->top  = 0;

    return s;
}

void
libcaerus_stack_destroy(Stack *s)
{
    free(s->content);
    free(s);
}

bool
libcaerus_stack_push(Stack *s, void *entity)
{
    if (s->top == s->size)
        return false;

    s->content[s->top++] = entity;
    return true;
}

void *
libcaerus_stack_pop(Stack *s)
{
    if (s->top == 0)
        return NULL;

    return s->content[s->top--];
}
