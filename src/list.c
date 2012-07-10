#include "list.h"

CorkList *
corklist_create(void)
{
    CorkList *l;

    if ((l = malloc(sizeof(CorkList))) == NULL)
        return NULL;

    return l;
}

void
corklist_destroy(CorkList *l)
{
    free(l->elements);
    free(l);
}

bool
corklist_append(CorkList *l, void *entity)
{
    CorkListElement *le;

    if ((le = malloc(sizeof(CorkListElement))) == NULL)
        return false;

    le->index = (l->size + 1);
    le->data  = entity;
}

void
corklist_prepend(CorkList *l, void *entity)
{ }

CorkListElement *
corklist_head(CorkList *l)
{
    return l->elements[0];
}

CorkListElement *
corklist_tail(CorkList *l)
{ }

bool
corklist_empty(CorkList *l)
{
    return (l->size == 0);
}
