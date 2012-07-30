#include "list.h"

CorcList *
corclist_create(void)
{
    CorcList *l;

    if ((l = malloc(sizeof(CorcList))) == NULL)
        return NULL;

    return l;
}

void
corclist_destroy(CorcList *l)
{
    free(l->elements);
    free(l);
}

bool
corclist_append(CorcList *l, void *entity)
{
    CorcListElement *le;

    if ((le = malloc(sizeof(CorcListElement))) == NULL)
        return false;

    le->index = (l->size + 1);
    le->data  = entity;
}

void
corclist_prepend(CorcList *l, void *entity)
{ }

CorcListElement *
corclist_head(CorcList *l)
{
    return l->head;
}

CorcListElement *
corclist_tail(CorcList *l)
{
    return l->tail;
}

bool
corclist_empty(CorcList *l)
{
    return (l->size == 0);
}
