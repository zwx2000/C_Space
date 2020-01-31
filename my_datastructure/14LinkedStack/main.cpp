#include <iostream>
//Á´Ê½¶ÑÕ»
#include "LinkedStack.h"

using namespace std;

int main()
{
    cout << "Á´Ê½Á´±í²âÊÔ£º" << endl;

    LinkedStack<int> s;

    s.Push(10);
    cout<<s.Top()<<endl;
    s.Push(20);
    cout<<s.Top()<<endl;
    s.Push(30);
    cout<<s.Top()<<endl;

    s.Pop();
    cout<<s.Top()<<endl;

    return 0;
}
