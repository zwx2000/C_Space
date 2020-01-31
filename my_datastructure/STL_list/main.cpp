#include <iostream>
#include <list>

using namespace std;

void PrintListContents(const list<int>& listInput);

int main()
{
    list<int> a;
    list<int> b;
    std::list<int>::iterator iter;

    b.push_back(100);
    b.push_back(200);
    b.push_back(300);
    b.push_back(400);
    b.push_back(500);

    a.push_front(4);
    a.push_front(3);
    a.push_front(2);
    a.push_front(1);
    a.push_back(5);

    iter=a.begin();
    ++iter;
    a.insert(iter,10);
    ++iter;
    a.insert(iter,4,20);
    a.insert(a.begin(),b.begin(),b.end());
    ++iter;

    PrintListContents(a);
    cout<<"---------------------"<<endl;
    PrintListContents(b);

    return 0;
}

void PrintListContents(const list<int>& listInput)
{
    std::list<int>::const_iterator iter;
    for(iter=listInput.begin(); iter!=listInput.end();++iter)
        cout<<*iter<<endl;
}
