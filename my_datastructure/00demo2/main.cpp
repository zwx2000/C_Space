#include <iostream>

using namespace std;

//C++ ������
//C���� ��ָ��
//��ֵ����
void swap(int &x, int &y);

int main()
{
    int a,b;
    a=1;
    b=10;

    cout<<"�����ã�"<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}

//���þ��Ǳ���
void swap(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
