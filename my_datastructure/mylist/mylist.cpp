#include <iostream>

#include "mylist.h"

List::List()
{
    head = new Node;
    head->next = NULL;
}

void List::insertList(const int &x)
{
    Node * cur = new Node;
    cur->data = x;

    head->next = cur;
    cur->next = NULL;

    head = cur;
}

void List::traverseList()
{
    Node * tmp;
    tmp = head->next;

    while(tmp->next != NULL)
    {
        std::cout<<tmp->data<<std::endl;
        tmp = tmp->next;
    }
}
