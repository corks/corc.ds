#include "list.h"

CaerusList *
libcaerus_list_create(void)
{
    CaerusList *l;

    if ((l = malloc(sizeof(CaerusList))) == NULL)
        return NULL;

    return l;
}

void
libcaerus_list_destroy(CaerusList *l)
{
    free(l->elements);
    free(l);
}

bool
libcaerus_list_append(CaerusList *l, void *entity)
{
    CaerusListElement *le;

    if ((le = malloc(sizeof(CaerusListElement))) == NULL)
        return false;

    le->index = (l->size + 1);
    le->data  = entity;
}

void
libcaerus_list_prepend(CaerusList *l, void *entity)
{ }

CaerusListElement *
libcaerus_list_head(CaerusList *l)
{
    return l->elements[0];
}

ListElement *
libcaerus_list_tail(CaerusList *l)
{ }

bool
libcaerus_list_empty(CaerusList *l)
{ }
