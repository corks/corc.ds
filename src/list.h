#ifndef LIBCAERUS_LIST_H
#define LIBCAERUS_LIST_H

#include "bool.h"

typedef struct ListElement
{
    int index;
    void *data;
} ListElement;

typedef struct List
{
    int size;
    ListElement **elements;
} List;

List *list_create(void);
void list_destroy(List *l);
void list_append(List *l, void *entity);
void list_prepend(List *l, void *entity);
ListElement *list_head(List *l);
ListElement *list_tail(List *l);
bool list_empty(List *l);

#endif
