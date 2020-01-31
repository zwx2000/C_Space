//二叉查找树
#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
    cout << "自实现二叉搜索树：" << endl;

    BST mt;

    cout << mt.Insert(3) << endl;
    cout << mt.Insert(2) << endl;
    cout << mt.Insert(5) << endl;
    cout << mt.Insert(4) << endl;
    cout << mt.Insert(11)<< endl;
    cout << mt.Insert(8) << endl;
    cout << mt.Insert(13)<< endl;

    mt.display();
    cout << "-------------------------" << endl;
    BstNode * t = mt.Search(3);
    cout << "递归找到的是:" << t->data <<endl;

    cout << "-------------------------" << endl;
    BstNode * t2 = mt.IterSearch(5);
    cout << "迭代找到的是:" << t2->data <<endl;

    cout << "-------------------------" << endl;

    cout << "中序遍历：" << endl;
    mt.InOrder();
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "前序遍历：" << endl;
    mt.PreOrder();
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "后序遍历：" << endl;
    mt.PostOrder();
    cout << endl;

    return 0;
}
