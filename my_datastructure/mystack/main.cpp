#include <iostream>
#include "mystack.h"
#include "mystack.cpp"

using namespace std;

int main()
{
    MyStack s(5);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
//    for(int i=0; i<3; i++)
//    {
//        cout << s.Top()<<endl;
//        s.Pop();
//    }
    s.Pop();
    cout<<s.Top();
    return 0;
}
