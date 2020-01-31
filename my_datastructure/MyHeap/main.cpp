#include <iostream>
#include "MyHeap.h"
#include "MyHeap.cpp"

using namespace std;

int main()
{
    MaxHeap<int> h(100);
    MaxHeap<int> g(100);
    cout << h.IsEmpty() << endl;

    h.Push(20);
    h.Push(30);
    h.Push(15);
    cout << h.Top() << endl;
    h.Push(90);
    h.Push(35);
    cout << h.Top() << endl;
    h.Pop();
    cout << h.Top() << endl;

    cout << "¶ÑÅÅÐò" << endl;
    int arr[] = {12,32,4,23,66,34,87,44,19,68};
    for(int i=0; i<10; i++)
    {
        h.Push(arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        arr[i] = h.Top();
        h.Pop();
    }

    for(int i=0; i<10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
