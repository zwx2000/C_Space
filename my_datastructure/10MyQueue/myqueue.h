#ifndef MYQUEUE_H
#define MYQUEUE_H

template<class T>
class MyQueue
{
public:
    MyQueue(int queueCapacity=10);
    bool IsEmpty() const;
    T& Front() const;
    T& Rear() const;
    void Push(const T& item);//��β��������
    void Pop();//����ɾ������

private:
    T *queue;
    int front;
    int rear;
    int capacity;
};

#endif // MYQUEUE_H
