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
    void Pop(); //ɾ���˸��������
    const T& Top() const; //ȡ����������ݵ���ɾ��

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
    delete [] heapArray; //ɾ��������Ϸ�����
}

template <class T>
bool MaxHeap<T>::IsEmpty()
{
    return currentSize == 0;
}

template <class T>
void MaxHeap<T>::Push(const T& e)
{
    //�ȼ����Ƿ�����
    if(currentSize == maxSize) throw "MaxHeap is full";

    //�����ݵĽڵ����һ����λ
    heapArray[currentSize] = e;

    //    trickleUp(currentSize);
    //    currentSize++;
    //��ʼ������͸
    trickleUp(currentSize++);
}

template <class T>
void MaxHeap<T>::trickleUp(int index)
{
    int parent = (index-1)/2;    //(�ӽڵ����-1)/2 = ���ڵ����
    T bottom = heapArray[index]; //��bottom��¼Ϊ���ı��

    while(index > 0 && heapArray[parent] < bottom)//�����׵�ֵ����Ҫ�ϸ���ֵʱ����ѭ�� indexΪ�����ϸ�λ��
    {
        heapArray[index] = heapArray[parent];//�����׵�ֵ�������� ��ʱ�ĸ���Ϊ��Чֵ

        index = parent;//ͬʱ����
        parent = (parent-1)/2;
    }
    heapArray[index] = bottom;//�����ҵ���λ�ø�ֵ
}

template <class T>
void MaxHeap<T>::trickleDown(int index)
{
    T top = heapArray[index];//��¼Ҫ�³���ֵ

    while(index < currentSize/2) //������͸ ֻ���ҵ����һ�����һ�� ���һ�����һ��ɿ������һ��
    {
        int largerChild;
        int leftChild = 2*index+1;
        int rightChild = leftChild+1;

        //��֤�Һ��Ӵ��ڲ�Ϊ�� �� �Һ��Ӵ�������
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
    heapArray[0] = heapArray[--currentSize];//currentSizeΪ���һ������һ�� Ϊ�� ����Ҫ--
    trickleDown(0);//��0��ʼ������͸
}

#endif // MAXHEAP_H
