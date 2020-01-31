#include <iostream>
#include "mystack.h"

//class MyStack
//{
//public:
//    MyStack(int size);
//    ~MyStack();

//    void Push(int & a);
//    void Pop();
//    int Top();
//    void Empty();
//    bool IsEmpty();

//private:
//    int top;
//    MyStack * stack;
//    int len;
//};

MyStack::MyStack(int size)
{
    stack = new int[size];
    len = size;
    top = 0;
}

MyStack::~MyStack()
{
    delete [] stack;
}

bool MyStack::IsEmpty()
{
    return top == 0;
}

void MyStack::Push(const int &a)
{
    stack[++top] = a;
}

void MyStack::Pop()
{
    if(IsEmpty()) throw "Stack is empty. cannot Pop";
    else    top--;
}

int MyStack::Top()
{
    if(IsEmpty())
        throw "stack is empty. cannot top";
    else
        return stack[top];
}

void MyStack::Empty()
{
    if(!IsEmpty())
        top--;
}


