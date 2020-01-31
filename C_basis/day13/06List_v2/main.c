#include <stdio.h>

typedef struct node
{
    int data;
    struct node * next;
}Node,*NodePtr;

//尾插法
#if 0
Node * creatList()
{
    Node * head = (Node*)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;

    Node *t = head, *cur;
    int nodeData;
    scanf("%d",&nodeData);
    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));
        if(NULL == head)
            exit(-1);
        cur->data = nodeData;
        t->next = cur;
        t = cur;
        scanf("%d",&nodeData);
    }
    t->next = NULL;
    return head;
}
#endif

#if 1
//所谓的头插法，就是在头节点后面插入元素，每插入一个元素即为首节点
//让新来的节点有所指向，避免打断原有的指向。
Node * creatList()
{
    Node * head = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    head->next = NULL;
    Node * cur;

    int nodeData;
    scanf("%d",&nodeData);

    while(nodeData)
    {
        cur = (Node *)malloc(sizeof(Node));
        cur->data = nodeData;
        if(NULL == head)
            exit(-1);

        cur->next = head->next;
        head->next = cur;
        scanf("%d",&nodeData);
    }
    return head;
}
#endif

//真正意义上的创建链表，就是创建一个空链表
//插入操作，本质就是头插法
void insertList(Node *head, int nodeData)
{
    Node * cur = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    cur->data = nodeData;
    cur->next = head->next;
    head->next = cur;

}

//遍历操作
void traverseList(Node *head)
{
    head = head->next;
    while(head)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

//求长
int lenList(Node *head)
{
    int len=0;
    head =head->next;
    while(head)
    {
        len++;
        head = head->next;
    }
    return len;
}

//查
Node * searchList(Node *head,int findData)
{
    head = head->next;
    while(head)
    {
        if(head->data == findData)
            break;
        head = head->next;
    }
    return head;
}

//删
//void deleteNodeofList(Node*head,Node *pfind)
//{
//    while(head->next != pfind)
//        head = head->next;
//    head->next = pfind->next;
//    free(pfind);
//    pfind = NULL;
//}

void deleteNodeofList(Node*head,Node *pfind)
{
    if(pfind->next == NULL)
    {
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

int main()
{
    Node *head = creatList();

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        insertList(head,i);
    }
    int len = lenList(head);
    printf("len = %d\n",len);

    traverseList(head);

    Node *pfind = searchList(head,0);
    if(pfind  == NULL)
        printf("find none\n");
    else {
        printf("you find in list\n");
        deleteNodeofList(head,pfind);
    }

    traverseList(head);
    return 0;
}
