#ifndef CORC_DS_SKIP_H
#define CORC_DS_SKIP_H

typedef struct CorkSkipListNode CorkSkipListNode;
typedef struct CorkSkipList CorkSkipList;

struct CorkSkipListNode
{
    int height;
    CorkSkipListNode **next;
    const char *key;
    void *data;
};

struct CorkSkipList
{
    int height;
    int count;
    CorkSkipListNode **head, *tail;
};

CorkSkipList *corksl_create(void);
void corksl_destroy(CorkSkipList *l);

#endif /* CORK_DS_SKIP_H */
