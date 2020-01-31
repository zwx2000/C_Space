#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack
{
public:
    MyStack(int size);
    ~MyStack();

    void Push(const int & a);
    void Pop();
    int Top();
    void Empty();
    bool IsEmpty();

private:
    int top;
    int * stack;
    int len;
};

#endif // MYSTACK_H
