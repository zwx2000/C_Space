#include <stdio.h>

typedef struct _dnode
{
    int data;
    struct _dnode *pre;
    struct _dnode *next;
}Dnode;

void traverseDlistNext(Dnode *head)
{
    Dnode * sh = head;
    sh = sh->next;
    while (sh != head) {
        printf("%d\n",sh->data);
        sh = sh->next;
    }
}

void traverseDlistPre(Dnode *head)
{
    Dnode * sh = head->pre;
    while (sh != head) {
        printf("%d\n", sh->data);
        sh = sh->pre;
    }
}

int main()
{
    Dnode a,b,c,d,e;

    Dnode * head = &a;

    b.data = 11;
    c.data = 22;
    d.data = 33;
    e.data = 44;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    e.pre = &d;
    d.pre = &c;
    c.pre = &b;
    b.pre = &a;

    e.next = &a;
    a.pre = &e;

    traverseDlistNext(head);
    traverseDlistPre(head);

    return 0;
}
