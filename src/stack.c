#include "stack.h"

Stack *
stack_create(const int size)
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
stack_destroy(Stack *s)
{
    free(s);
}

bool
stack_push(Stack *s, void *abstract)
{
    if (s->top == s->size)
        return false;

    s->content[s->top++] = abstract;
    return true;
}

void *
stack_pop(Stack *s)
{
    if (s->top == 0)
        return NULL;

    return s->content[--s->top];
}

void
stack_pop_all(Stack *s)
{
    if (s->top == 0)
        return;

    s->content[--s->top];
    stack_pop_all(s);
}
