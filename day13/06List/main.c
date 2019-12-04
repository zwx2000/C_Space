#include <stdio.h>

typedef struct node         //定义节点
{
    int data;
    struct node * next;
}Node;

//1 2 3 0
//尾插法，在尾节点插入，美插入一个节点，即成尾节点

#if 0
Node * creatList()            //创建节点
{
    Node *head = (Node *)malloc(sizeof(Node));        //为头节点申请空间并使其指向空
    if(NULL == head)
        exit(-1);
    head->next = NULL;

    Node *t = head, *cur;       //
    int nodeData;
    scanf("%d", &nodeData);     //读入需要插入的数据
    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));  //为cur申请空间并赋值
        if(NULL == head)
            exit(-1);
        cur->data = nodeData;
        t->next = cur;      //核心语句！  将新申请的节点与上一个节点连接
        t = cur;            //核心语句！  将t再次指向尾节点
        scanf("%d", &nodeData);
    }
    t->next = NULL;
    return head;
}
#endif

#if 1
//所谓的头插法，就是在头节点后面插入元素，每插入一个元素，即为首元素
//让新来的节点先有所指向，避免打断原有的指向

Node * creatList()
{
    Node *head = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;
    Node * cur;

    int nodeData;
    scanf("%d", &nodeData);
    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));
        if(NULL == head)
            exit(-1);
        cur->data = nodeData;

        cur->next = head->next;  //核心语句！ 将新节点插在首节点前
        head->next = cur;        //核心语句！ 打断原有连接，将头节点指针指向新节点

        scanf("%d", &nodeData);
    }
    return head;
}

#endif

//真正意义上的创建链表，就是创建一个空链表

Node * creatList()
{
    Node * head = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;
    return head;
}

//插入操作 本质就是头插法

void insertList(Node *head, int nodeData)
{
    Node *cur = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    cur->data = nodeData;
    cur->next = head->next;
    head->next = cur;
}

void traverseList(Node *head)
{
    head = head->next;
    while(head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

//求长(本质就是遍历）
int lenList(Node *head)
{
    int len = 0;
    head = head->next;
    while(head)
    {
        len++;
        head = head->next;
    }
    return len;
}

//查
Node *searchList(Node*head, int findData)
{
    head = head->next;
    while(head)
    {
        if(head->data == findData)
            return head;
        head = head->next;
    }
    return head;
}

////删
//void deleteNodeofList(Node *head, Node *pfind)
//{
//    while(head->next != pfind)
//        head = head->next;
//    head->next = pfind->next;
//    free(pfind);
//    pfind = NULL;
//}

//优化版删除
void deleteNodeofList(Node *head, Node *pfind)
{
    if(pfind->next == NULL) {
        while(head->next != pfind)
            head = head->next;
        head->next = pfind->next;
        free(pfind);
        pfind = NULL;
    }
    else {
        Node *t = pfind->next;
        pfind->data = pfind->next->data;
        pfind->next = pfind->next->next;
        free(t);
    }
}

//排序
#if 0
void popSortList(Node *head)
{
    int len = lenList(head);
    head = head->next;
    Node *p, *q;
    for(int i=0; i<len-1; i++)
    {
        p = head; //每次内层循环从头开始
        q = p->next; //q总是指向p的下一节点，也就是被比较的节点
        for(int j=0; j<len-1-i; j++)
        {
            if(p->data > q->data)
            {
                p->data ^= q->data;
                q->data ^= p->data;
                p->data ^= q->data;
            }
            p = p->next;
            q = p->next;
        }
    }
}
#endif

//更快的排序
//四两拨千斤 不动元素 只动指针
void popSortList(Node *head)
{
    int len = lenList(head);
    Node *prep,*p,*q, *t;
    for(int i=0; i<len-1; i++)
    {
        prep = head;
        p = head->next;
        q = p->next;
        for(int j=0; j<len-1-i; j++)
        {
            if(p->data > q->data)
            {
                prep->next = q;
                p->next = q->next;
                q->next = p;

                t = p;
                p = q;
                q = t;
            }
            prep = prep->next;
            p = p->next;
            q = p->next;
        }
    }
}

//链表的倒置
void reverseList(Node *head)
{
    Node *cur = head->next;
    head->next = NULL;
    Node *t;
    while(cur)
    {
        t = cur;
        cur = cur->next;

        t->next = head->next;
        head->next = t;
    }
}

//链表销毁
//有多少malloc，就有多少free
void destoryList(Node * head)
{
    Node *t;
    while(head)
    {
        t = head;
        head = head->next;
        free(t);
    }
}

int main(int argc, char *argv[])
{
    Node *head = creatList();

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        insertList(head, rand()%100);
    }
    traverseList(head);

    printf("---------------------------------------------------------------\nlen of list = %d\n", lenList(head));

    Node *pfind = searchList(head, 5);
    if(pfind == NULL)
        printf("find none\n");
    else {
        printf("your find in list\n");

        deleteNodeofList(head, pfind);
    }
    printf("---------------------------------------------------------------\nafter delete\n");
    traverseList(head);

    popSortList(head);
    printf("---------------------------------------------------------------\nafter popsort: \n");
    traverseList(head);

    reverseList(head);
    printf("---------------------------------------------------------------\nafter reverse\n");
    traverseList(head);

    destoryList(head);

    return 0;
}
