#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    /*
     * �������
      ������-�ڵ�-������
      A / B * C - D + E

      ǰ�����
      �ڵ�-������-������
      + - * / A B C D E

      �������
      ������-������-�ڵ�
      A B / C * D - E +
    */

    BinaryTree<char> tree;
    TreeNode<char> add,sub,mul,div,a,b,c,d,e;

    add.data = '+';
    sub.data = '-';
    mul.data = '*';
    div.data = '/';
    a.data = 'A';
    b.data = 'B';
    c.data = 'C';
    d.data = 'D';
    e.data = 'E';

    tree.root = &add;
    add.leftChild = &sub;
    add.rightChild = &e;
    sub.leftChild = &mul;
    sub.rightChild = &d;
    mul.leftChild = &div;
    mul.rightChild = &c;
    div.leftChild = &a;
    div.rightChild = &b;

    cout<<"���������"<<endl;
    tree.InOrder();//�������
    cout<<endl;

    cout<<"ǰ�������"<<endl;
    tree.PreOrder();
    cout<<endl;

    cout<<"���������"<<endl;
    tree.PostOrder();
    cout<<endl;

    cout<<"���������"<<endl;
    tree.LevelOrder();
    cout<<endl;

    return 0;
}
