#include <stdio.h>

//解决内存零碎数据的有效组织

//数据域，我么要存储的数据
//指针域，指针指向下一个节点，下一个结点的类型是什么样子的

//所谓的指向谁，就是存了谁的地址

typedef struct node
{
    int data;
    struct node * next;
}Node;

//遍历逻辑
//当前指针 指向第一个元素并且不为空
//打印第一个元素的值，同时得到第二个元素的地址

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
    Node a,b,c,d,e,f; //此节点均在栈上

    Node *head;
    head = &a; //1,开头

    a.data = 1; //2 内容
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    a.next                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      = &b; //3 链接
    b.next = &c;
    c.next = &d;
    d.next = &e;

    e.next = NULL; //4 结尾

//    Node * pHead = head; //替身

//    while(pHead != NULL)
//    {
//        printf("%d\n",pHead->data);
//        pHead = pHead->next;
//    }

    traverseList(head);

    return 0;
}
