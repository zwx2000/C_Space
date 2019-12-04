#include <stdio.h>

typedef struct node
{
    int data;
    struct node * next;
}Node,*NodePtr;

//β�巨
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
//��ν��ͷ�巨��������ͷ�ڵ�������Ԫ�أ�ÿ����һ��Ԫ�ؼ�Ϊ�׽ڵ�
//�������Ľڵ�����ָ�򣬱�����ԭ�е�ָ��
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

//���������ϵĴ����������Ǵ���һ��������
//������������ʾ���ͷ�巨
void insertList(Node *head, int nodeData)
{
    Node * cur = (Node *)malloc(sizeof(Node));
    if(NULL == head)
        exit(-1);
    cur->data = nodeData;
    cur->next = head->next;
    head->next = cur;

}

//��������
void traverseList(Node *head)
{
    head = head->next;
    while(head)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

//��
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

//��
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

//ɾ
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
