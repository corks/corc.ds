#ifndef CORC_DS_LIST_H
#define CORC_DS_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct CorcListElement
{
    int index;
    void *data;
} CorcListElement;

typedef struct CorcList
{
    int size;
    CorcListElement **elements;
} CorcList;

CorcList *corclist_create(void);
void corclist_destroy(CorcList *l);
void corclist_prepend(CorcList *l, void *entity);
CorcListElement *corclist_head(CorcList *l);
CorcListElement *corclist_tail(CorcList *l);
bool corclist_append(CorcList *l, void *entity);
bool corclist_empty(CorcList *l);

#endif
