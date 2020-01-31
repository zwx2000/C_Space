#ifndef LIST_H
#define LIST_H

#include <iostream>

//循环链表
template <class Type> class List;
template <class Type> class ListIterator;

template <class Type>
class ListNode
{
friend class List<Type>;
friend class ListIterator<Type>;

private:
    Type data;
    ListNode *link;
    ListNode(Type);
    ListNode(){}
};

template <class Type>
class List
{
friend class ListIterator<Type>;

public:
    List() {first = new ListNode<Type>; first->link = first;}
    void Insert(Type);
    void Delete(Type);
    void Invert();//反转
    void Concatenate(List<Type>);//链接
    void Show();

private:
    ListNode<Type> *first;
};

template <class Type>
class ListIterator
{
public:
    ListIterator(const List<Type>& l):list(l),current(l.first->link){}
    bool NotNull();
    bool NextNotNull();
    Type* First();
    Type* Next();
private:
    const List<Type> &list;
    ListNode<Type>* current;
};

template <class Type>
bool ListIterator<Type>::NotNull()
{
    if(current!=list.first) return true;
    else return false;
}

template <class Type>
bool ListIterator<Type>::NextNotNull()
{
    if(current->link!=list.first) return true;
    else return false;
}

template <class Type>
Type* ListIterator<Type>::First()
{
    if(current != list.first) return &current->data;
    else return 0;
}

template <class Type>
Type* ListIterator<Type>::Next()
{
        current=current->link;
        if(current == list.first) current = current->link;
        return &current->data;
}

template <class Type>
ListNode<Type>::ListNode(Type element)
{
    data = element;
    link=0;
}

template <class Type>
void List<Type>::Insert(Type k)
{
    ListNode<Type> *newnode = new ListNode<Type>(k);
    newnode->link = first->link;
    first->link = newnode;
}

template <class Type>
void List<Type>::Delete(Type k)
{
    ListNode<Type> *previous = first; //前一个
    ListNode<Type> *current;
    for(current=first->link;
        current!=first && current->data!=k;
        previous = current, current=current->link)
    {} //空循环 找到被删除的节点的位置

    if(current != first)
    {
//        if(previous) previous->link = current->link;
//        else first = first->link;
        previous->link = current->link;
        delete current;
    }
}

template <class Type>
void List<Type>::Invert()
{
    ListNode<Type> * p = first, *q = 0;
    while(p)
    {
        ListNode<Type>*r = q; //让新来的r指向q所指向的 q就可以修改为指向p所指向的 同时备份了p 则p可以修改
        q=p;                  //再将q(原来的p)的next设为r(原来的q)
        p=p->link;
        q->link=r;
    }
    first = q;
}

template <class Type>
void List<Type>::Concatenate(List<Type> b)
{
    if(!first) {first=b.first; return;}
    if(b.first)
    {
        ListNode<Type>*p;
        for(p=first;p->link;p=p->link);
        p->link = b.first;
    }
}

template <class Type>
void List<Type>::Show()
{
    for(ListNode<Type> *current = first; current; current = current->link)
    {
        std::cout<<current->data;
        if(current->link) std::cout<<"->";
    }
    std::cout<<std::endl;
}

#endif // LIST_H
