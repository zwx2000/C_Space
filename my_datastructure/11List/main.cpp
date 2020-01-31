#include <iostream>
#include "ThreeLetterList.h"

using namespace std; //前置声明

class List;

class Node
{
friend class List;  //设置友元类 使得test可访问私有成员

private:
    int data;   //节点里的数据
    Node * link;//指向下一个节点的指针
};

class List  //链表
{
public:
    void test();
    void show();
private:
    Node * first; //指向第一个结点的指针
};

void List::show()
{
    cout<<first->data<<" -> "
       <<first->link->data<<" -> "
    <<first->link->link->data<<endl;
}

void List::test()
{
    Node *f = new Node();
    f->data = 44;
    f->link = 0;

    first = f;

    f = new Node();
    f->data = 72;
    f->link = 0;

    first->link = f;

    f = new Node();
    f->data = 210;
    f->link = 0;

    first->link->link = f;
}

int main()
{
    List a;
    a.test(); //创建了三个节点
    a.show();

    ThreeLetterList b;
    b.test();
    b.show();
    return 0;
}
