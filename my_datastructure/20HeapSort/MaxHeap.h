#ifndef MAXHEAP_H
#define MAXHEAP_H

template <class T>
class MaxHeap
{
public:
    MaxHeap(int mx = 10);
    virtual ~MaxHeap();

    bool IsEmpty();
    void Push(const T&);
    void Pop(); //删除了根里的数据
    const T& Top() const; //取出根里的数据但不删除

private:
    T* heapArray;
    int maxSize;
    int currentSize;

    void trickleUp(int index);
    void trickleDown(int index);
};

template <class T>
MaxHeap<T>::MaxHeap(int mx)
{
    if(mx<1) throw "max size must be >= 1";

    maxSize = mx;
    currentSize = 0;
    heapArray = new T[maxSize];
}

template <class T>
MaxHeap<T>::~MaxHeap<T>()
{
    delete [] heapArray; //删除数组加上方括号
}

template <class T>
bool MaxHeap<T>::IsEmpty()
{
    return currentSize == 0;
}

template <class T>
void MaxHeap<T>::Push(const T& e)
{
    //先检查堆是否已满
    if(currentSize == maxSize) throw "MaxHeap is full";

    //有数据的节点的下一个空位
    heapArray[currentSize] = e;

    //    trickleUp(currentSize);
    //    currentSize++;
    //开始向上渗透
    trickleUp(currentSize++);
}

template <class T>
void MaxHeap<T>::trickleUp(int index)
{
    int parent = (index-1)/2;    //(子节点序号-1)/2 = 父节点序号
    T bottom = heapArray[index]; //将bottom记录为最后的标号

    while(index > 0 && heapArray[parent] < bottom)//当父亲的值大于要上浮的值时跳出循环 index为最终上浮位置
    {
        heapArray[index] = heapArray[parent];//将父亲的值赋给孩子 此时的父亲为无效值

        index = parent;//同时上移
        parent = (parent-1)/2;
    }
    heapArray[index] = bottom;//将所找到的位置赋值
}

template <class T>
void MaxHeap<T>::trickleDown(int index)
{
    T top = heapArray[index];//记录要下沉的值

    while(index < currentSize/2) //向下渗透 只需找到最后一层的上一层 最后一层的上一层可控制最后一层
    {
        int largerChild;
        int leftChild = 2*index+1;
        int rightChild = leftChild+1;

        //保证右孩子存在不为空 且 右孩子大于左孩子
        if(rightChild < currentSize && heapArray[leftChild] < heapArray[rightChild])
            largerChild = rightChild;
        else
            largerChild = leftChild;

        if(top >= heapArray[largerChild])
            break;

        heapArray[index] = heapArray[largerChild];
        index = largerChild;
    }
    heapArray[index] = top;
}

template <class T>
const T& MaxHeap<T>::Top() const
{
    return heapArray[0];
}

template <class T>
void MaxHeap<T>::Pop()
{
    heapArray[0] = heapArray[--currentSize];//currentSize为最后一个的下一个 为空 所以要--
    trickleDown(0);//从0开始向下渗透
}

#endif // MAXHEAP_H
