#include <iostream>
#include "mylist.h"
#include "mylist.cpp"

using namespace std;

int main()
{
    List ml;
    ml.insertList(1);
    ml.insertList(2);
    ml.insertList(3);
    ml.traverseList();
    return 0;
}
