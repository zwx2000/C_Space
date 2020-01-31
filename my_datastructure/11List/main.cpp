#include <iostream>
#include "ThreeLetterList.h"

using namespace std; //ǰ������

class List;

class Node
{
friend class List;  //������Ԫ�� ʹ��test�ɷ���˽�г�Ա

private:
    int data;   //�ڵ��������
    Node * link;//ָ����һ���ڵ��ָ��
};

class List  //����
{
public:
    void test();
    void show();
private:
    Node * first; //ָ���һ������ָ��
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
    a.test(); //�����������ڵ�
    a.show();

    ThreeLetterList b;
    b.test();
    b.show();
    return 0;
}
