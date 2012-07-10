#ifndef LIBCAERUS_LIST_H
#define LIBCAERUS_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct CorkListElement
{
    int index;
    void *data;
} CorkListElement;

typedef struct CorkList
{
    int size;
    CorkListElement **elements;
} CorkList;

CorkList *corklist_create(void);
void corklist_destroy(CorkList *l);
void corklist_prepend(CorkList *l, void *entity);
CorkListElement *corklist_head(CorkList *l);
CorkListElement *corklist_tail(CorkList *l);
bool corklist_append(CorkList *l, void *entity);
bool corklist_empty(CorkList *l);

#endif
