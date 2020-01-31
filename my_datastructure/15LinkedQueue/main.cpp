#include <iostream>
#include "LinkedQueue.h"

using namespace std;

int main()
{
    cout << "Á´Ê½¶ÓÁÐ£º" << endl;

    Queue<int> myQ;

    myQ.enqueue(10);
    myQ.enqueue(20);
    myQ.enqueue(30);

    cout<<myQ.getFront()<<endl;
//    myQ.dequeue();
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.getFront()<<endl;

    for(int j=0; j<8; j++)
    {
        for(int i=0; i<8; i++)
            myQ.enqueue(i);
        while(!myQ.isEmpty())
            cout<<myQ.dequeue()<<endl;
    }
    return 0;
}
