#ifndef YNYS_DS_LIST_H
#define YNYS_DS_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct YnysListElement
{
    int index;
    void *data;
} YnysListElement;

typedef struct YnysList
{
    int size;
    YnysListElement **elements;
} YnysList;

YnysList *ynyslist_create(void);
void ynyslist_destroy(YnysList *l);
void ynyslist_prepend(YnysList *l, void *entity);
YnysListElement *ynyslist_head(YnysList *l);
YnysListElement *ynyslist_tail(YnysList *l);
bool ynyslist_append(YnysList *l, void *entity);
bool ynyslist_empty(YnysList *l);

#endif
