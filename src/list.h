#ifndef LIBCAERUS_LIST_H
#define LIBCAERUS_LIST_H

#include <stdbool.h>

typedef struct CaerusListElement
{
    int index;
    void *data;
} CaerusListElement;

typedef struct CaerusList
{
    int size;
    CaerusListElement **elements;
} CaerusList;

CaerusList *libcaerus_list_create(void);
void libcaerus_list_destroy(CaerusList *l);
void libcaerus_list_append(CaerusList *l, void *entity);
void libcaerus_list_prepend(CaerusList *l, void *entity);
CaerusListElement *libcaerus_list_head(CaerusList *l);
CaerusListElement *libcaerus_list_tail(CaerusList *l);
bool libcaerus_list_empty(CaerusList *l);

#endif
