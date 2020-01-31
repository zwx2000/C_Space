#include <iostream>

using namespace std;

//C++ 传引用
//C语言 传指针
//按值传递
void swap(int &x, int &y);

int main()
{
    int a,b;
    a=1;
    b=10;

    cout<<"传引用："<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}

//引用就是别名
void swap(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
