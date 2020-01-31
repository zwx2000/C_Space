#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    /*
     * 中序遍历
      左子树-节点-右子树
      A / B * C - D + E

      前序遍历
      节点-左子树-右子树
      + - * / A B C D E

      后序遍历
      左子树-右子树-节点
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

    cout<<"中序遍历："<<endl;
    tree.InOrder();//中序遍历
    cout<<endl;

    cout<<"前序遍历："<<endl;
    tree.PreOrder();
    cout<<endl;

    cout<<"后序遍历："<<endl;
    tree.PostOrder();
    cout<<endl;

    cout<<"层序遍历："<<endl;
    tree.LevelOrder();
    cout<<endl;

    return 0;
}
