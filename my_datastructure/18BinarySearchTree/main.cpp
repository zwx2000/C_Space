//�������в���
#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
    BST<int> m;
    Element<int> a,b,c,d,e,f,g,h,i,j,k,l;
    a.key = 5;
    b.key = 3;
    c.key = 11;
    d.key = 3;
    e.key = 15;
    f.key = 2;
    g.key = 8;
    h.key = 22;
    i.key = 20;
    j.key = 9;

    cout << endl;
    cout << m.Insert(a) << endl;//a=5 ����root
    cout << m.Insert(b) << endl;//b=3
    cout << m.Insert(c) << endl;//11
    cout << m.Insert(d) << endl;//3
    cout << m.Insert(e) << endl;//15
    cout << m.Insert(f) << endl;//2
    cout << m.Insert(g) << endl;
    cout << m.Insert(h) << endl;

    m.display();

    BstNode<int> *p = m.Search(f);
    cout << "(�ݹ����)�ҵ�����: " << p->data.key << endl;

    BstNode<int> *p2 = m.IterSearch(e);
    cout << "(��������)�ҵ�����: " << p2->data.key << endl;

    return 0;
}
