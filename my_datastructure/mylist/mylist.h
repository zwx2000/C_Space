#ifndef MYLIST_H
#define MYLIST_H

class Node
{
public:
    int data;
    Node * next;
};

class List
{
friend class Node;

public:
    List();
    void insertList(const int &x);
    void traverseList();

private:
    Node * head;
};

#endif // MYLIST_H
