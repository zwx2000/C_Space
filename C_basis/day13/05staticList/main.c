#include <stdio.h>
//数据域，我们要存储的数据在此
//指针域，指针指向下一具节点，下一个节点的类型是什么样子的，就是本类型

//所谓的指向谁，就是存了谁的地址

typedef struct Node
{
    int data;
    struct Node * next;
}Node;

//遍历逻辑
//当前指针 指向第1个元素,并且不为空
//打印第1个元素的值,同时能得到第2个元素的地址
//第2个元素的地址,赋给当前指针

void traverseList(Node * head)
{
    while(head)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main(int argc, char *argv[])
{
    Node a,b,c,d,e; //此节点均在线上

    Node * head;
    head = &a;      //第一步 开头

    a.data = 1;     //第二步 内容
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;

    a.next = &b;    //第三步 链接
    b.next = &c;
    c.next = &d;
    d.next = &e;

    e.next = NULL;  //第四步 结尾

    Node * pHead = head;

    while(pHead != NULL)
    {
        printf("%d\n", pHead->data);
        pHead = pHead->next;
    }

    traverseList(head);

    return 0;
}
