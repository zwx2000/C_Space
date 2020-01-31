#include <iostream>
#include "myqueue.h"
#include "myqueue.cpp"

using namespace std;

int main()
{
    cout << "Test!" << endl;

    MyQueue<char> q(5);

    q.Push('A');
    q.Push('B');
    cout<<q.Front()<<", "<<q.Rear()<<endl;
    q.Push('C');
    q.Push('D');
    q.Push('E');
    q.Push('F');
    cout<<q.Front()<<", "<<q.Rear()<<endl;
    q.Push('G');
    cout<<q.Front()<<", "<<q.Rear()<<endl;
    return 0;
}
