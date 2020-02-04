#include <stdio.h>

typedef struct _dnode
{
    int data;
    struct _dnode *pre;
    struct _dnode *next;
}Dnode;

Dnode * creatDlist()
{
    Dnode * head = (Dnode *)malloc(sizeof(Dnode));
    if(NULL == head)
        exit(-1);

    head->next = head;
    head->pre = head;

    return head;
}

void insertDlist(Dnode *head, int n)
{
    Dnode * cur = (Dnode *)malloc(sizeof(Dnode));
    if(NULL == cur)
        exit(-1);

    cur->data = n;

    cur->next = head->next;
    cur->pre = head;
    head->next = cur;
    cur->next->pre = cur;
}

void traverseDlist(Dnode * head)
{
    Dnode * sh = head->next;
    while(sh != head) {
        printf("%d\n", sh->data);
        sh = sh->next;
    }
}

int lenDlist(Dnode * head)
{
    int len = 0;
    Dnode * sh = head->next;
    while(sh != head) {
        sh = sh->next;
        len++;
    }
    return len;
}

Dnode * searchDlist(Dnode *head, int find)
{
    Dnode * clock = head->next, * unclock = head->pre;
    while(unclock != clock->pre)
    {
        if(clock->data == find)
            return clock;
        if(unclock->data == find)
            return unclock;
        if(clock == unclock)
            break;

        clock = clock->next;
        unclock = unclock->pre;
    }
    return NULL;
}

void deleteDlistNode(Dnode *pfind)
{
    pfind->pre->next = pfind->next;
    pfind->next->pre = pfind->pre;
    free(pfind);
}

void destroyDlist(Dnode * head)
{
    head->pre->next = NULL;
    Dnode * cur;
    while(head) {
        cur = head;
        head = head->next;
        free(cur);
    }
}

void sortDlist(Dnode * head)
{
    int len = lenDlist(head);
    Dnode *p, *q, *t;
    for(int i=0; i<len-1; i++)
    {
        p = head->next;
        q = p->next;
        for(int j=0; j<len-1-i; j++)
        {
            if(p->data > q->data)
            {
                p->pre->next = q;
                q->pre = p->pre;
                p->next = q->next;
                p->pre = q;
                q->next = p;
                p->next->pre = p;

                q = p->next;
                continue;
            }
            p = p->next;
            q = p->next;
        }
    }
}

int main()
{
    Dnode * head = creatDlist();

    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        insertDlist(head, rand()%100);
    }

    traverseDlist(head);
    int len = lenDlist(head);

    printf("len = %d\n", len);

    Dnode * pfind = searchDlist(head,6);
    if(pfind == NULL)
        printf("find none\n");
    else
    {
        printf("in list\n");
        deleteDlistNode(pfind);
        printf("after delete:\n");
        traverseDlist(head);
    }

    sortDlist(head);
    printf("after sort:\n");
    traverseDlist(head);

    destroyDlist(head);

    return 0;
}
