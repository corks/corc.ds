#include "list.h"

YnysList *
ynyslist_create(void)
{
    YnysList *l;

    if ((l = malloc(sizeof(YnysList))) == NULL)
        return NULL;

    return l;
}

void
ynyslist_destroy(YnysList *l)
{
    free(l->elements);
    free(l);
}

bool
ynyslist_append(YnysList *l, void *entity)
{
    YnysListElement *le;

    if ((le = malloc(sizeof(YnysListElement))) == NULL)
        return false;

    le->index = (l->size + 1);
    le->data  = entity;
}

void
ynyslist_prepend(YnysList *l, void *entity)
{ }

YnysListElement *
ynyslist_head(YnysList *l)
{
    return l->elements[0];
}

YnysListElement *
ynyslist_tail(YnysList *l)
{ }

bool
ynyslist_empty(YnysList *l)
{
    return (l->size == 0);
}
