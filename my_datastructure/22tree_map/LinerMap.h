#ifndef LINERMAP_H
#define LINERMAP_H

#include <vector>

template <class Key, class Value>
class LinerMap //����ӳ�� û�õĶ���
{
public:
    LinerMap(int size=101) :arr(size)
    {
        currentSize = 0;
    }

    void Put(const Key & k, const Value & v)
    {
        arr[currentSize] = DataEntry(k,v);
        ++currentSize;
    }

    Value Get(const Key & k)
    {
        //���Բ���
        for(size_t i=0; i<currentSize; ++i)
        {
            if(arr[i].key == k)
                return arr[i].value;
        }
        return Value();
    }

private:
    struct DataEntry {
        Key key;
        Value value;

        DataEntry(const Key & k = Key(), const Value & v = Value())
            :key(k),value(v){}
    };
    std::vector<DataEntry> arr;
    int currentSize;
};

#endif // LINERMAP_H
