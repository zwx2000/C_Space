//���������
#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
    cout << "��ʵ�ֶ�����������" << endl;

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
    cout << "�ݹ��ҵ�����:" << t->data <<endl;

    cout << "-------------------------" << endl;
    BstNode * t2 = mt.IterSearch(5);
    cout << "�����ҵ�����:" << t2->data <<endl;

    cout << "-------------------------" << endl;

    cout << "���������" << endl;
    mt.InOrder();
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "ǰ�������" << endl;
    mt.PreOrder();
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "���������" << endl;
    mt.PostOrder();
    cout << endl;

    return 0;
}
