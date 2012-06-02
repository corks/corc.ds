#include "list.h"

List *
list_create(void)
{
    List *l;

    if ((l = malloc(sizeof(List))) == NULL)
        return NULL;

    return l;
}

void
list_destroy(List *l)
{
    free(l->elements);
    free(l);
}

bool
list_append(List *l, void *entity)
{
    ListElement *le;

    if ((le = malloc(sizeof(ListElement))) == NULL)
        return false;

    le->index = (l->size + 1);
    le->data  = entity;
}

void
list_prepend(List *l, void *entity)
{ }

ListElement *
list_head(List *l)
{
    return l->elements[0];
}

ListElement *
list_tail(List *l)
{ }

bool
list_empty(List *l)
{ }
