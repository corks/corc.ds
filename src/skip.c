#include "skip.h"
#include "stdlib.h"

#ifndef CORK_DS_SKIP_MAX_HEIGHT
#define CORK_DS_SKIP_MAX_HEIGHT 32
#endif

CorkSkipList *corksl_create(void)
{
    int i;
    CorkSkipList *l;

    l = malloc(sizeof(CorkSkipList));
    l->height = l->count = 0;
    l->tail = NULL;

    for (i = 0; i < CORK_DS_SKIP_MAX_HEIGHT; ++i)
        l->head[i] = NULL;

    return l;
}

void corksl_add(const char *key, void *object)
{
}
