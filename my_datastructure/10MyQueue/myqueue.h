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
    void Push(const T& item);//队尾插入数据
    void Pop();//队首删除数据

private:
    T *queue;
    int front;
    int rear;
    int capacity;
};

#endif // MYQUEUE_H
