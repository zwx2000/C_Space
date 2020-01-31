#include "myqueue.h"
#include <iostream>
#include <stdio.h>

template <class T>
MyQueue<T>::MyQueue(int queueCapacity):capacity(queueCapacity)
{
    if(capacity<1) throw "Queue capacity must be > 0";
    queue = new T[capacity];
    front = rear = 0;
}

template <class T>
inline bool MyQueue<T>::IsEmpty() const
{
    return front==rear;
}

template <class T>
void MyQueue<T>::Push(const T &item)
{
//    if(rear==capacity-1)
//        rear=0;
//    else
//        rear++;
    if((rear+1)&capacity==front) //队列满了
    {
        //加倍
        T* newQueue = new T[2*capacity];

        int start = (front+1)%capacity;
        if(start<2)//没有回转 no warp
            std::copy(queue+start,queue+start+capacity-1,newQueue);
        else  //warp
        {
            std::copy(queue+start, queue+capacity, newQueue);
            std::copy(queue, queue+rear+1,newQueue+capacity-start);
        }

        front = 2*capacity-1;
        rear = capacity-2;
        capacity *= 2;
        delete[] queue;
        queue = newQueue;
    }

    rear = (rear+1)%capacity;//高水平！
    queue[rear]=item;
}

template <class T>
inline T& MyQueue<T>::Front() const
{
    if(IsEmpty()) throw "Queue is empty. No front element";
    return queue[(front+1) % capacity];
}

template <class T>
inline T& MyQueue<T>::Rear() const
{
    if(IsEmpty()) throw "Queue is empty. No rear element.";
    return queue[rear];
}

template<class T>
void MyQueue<T>::Pop()
{
    if(IsEmpty()) throw "Queue is empty. Cannot delete.";
    front = (front+1)%capacity;
    queue[front].~T();
}
