#include <stdio.h>

//����ڴ��������ݵ���Ч��֯

//��������ôҪ�洢������
//ָ����ָ��ָ����һ���ڵ㣬��һ������������ʲô���ӵ�

//��ν��ָ��˭�����Ǵ���˭�ĵ�ַ

typedef struct node
{
    int data;
    struct node * next;
}Node;

//�����߼�
//��ǰָ�� ָ���һ��Ԫ�ز��Ҳ�Ϊ��
//��ӡ��һ��Ԫ�ص�ֵ��ͬʱ�õ��ڶ���Ԫ�صĵ�ַ

void traverseList(Node *head)
{
    while(head)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

int main()
{
    Node a,b,c,d,e,f; //�˽ڵ����ջ��

    Node *head;
    head = &a; //1,��ͷ

    a.data = 1; //2 ����
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    a.next                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      = &b; //3 ����
    b.next = &c;
    c.next = &d;
    d.next = &e;

    e.next = NULL; //4 ��β

//    Node * pHead = head; //����

//    while(pHead != NULL)
//    {
//        printf("%d\n",pHead->data);
//        pHead = pHead->next;
//    }

    traverseList(head);

    return 0;
}
