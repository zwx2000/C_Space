#include <iostream>
#include <list>
#include "List.h"
using namespace std;

int main()
{
    cout<<"测试："<<endl;

    cout<<endl<<"我的链表和迭代器"<<endl;

    List<int> intList;

    intList.Insert(5);
    intList.Insert(15);
    intList.Insert(25);
    intList.Insert(35);

    ListIterator<int> li(intList);
    if(li.NotNull())
    {
        cout<< *li.First();
        while(li.NextNotNull())
            cout<<"->"<<*li.Next();
        cout<<endl;
    }

    cout<<"测试一下循环："<<endl;
    ListIterator<int> iter(intList);
    cout<<*iter.First()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;
    cout<<*iter.Next()<<endl;


//    intList.Show();

//    cout<<"------------------"<<endl;
//    cout<<"反转后："<<endl;
//    intList.Invert();
//    intList.Show();

//    cout<<"------------------"<<endl;
//    cout<<"删除15后："<<endl;
//    intList.Delete(15);
//    intList.Show();

//    cout<<"------------------"<<endl;
//    cout<<"新建："<<endl;
//    List<char> charList;
//    charList.Insert('a');
//    charList.Insert('b');
//    charList.Insert('c');
//    charList.Insert('d');
//    charList.Show();
//    charList.Invert();
//    charList.Show();

//    List<char> charList2;
//    charList2.Insert('e');
//    charList2.Insert('f');
//    charList2.Show();
//    charList2.Invert();
//    charList2.Show();

//    cout<<"------------------"<<endl;
//    cout<<"链接后："<<endl;
//    charList.Concatenate(charList2);
//    charList.Show();

    return 0;
}
