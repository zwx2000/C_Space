#ifndef HASHMAP_H
#define HASHMAP_H

#include <vector>

template <class Key, class Value>
class HashMap //��ϣӳ��
{
public:
    HashMap(int size=101) :arr(size)
    {
        currentSize = 0;
    }

    void Put(const Key & k, const Value & v)
    {
        int pos = myhash(k);
        arr[pos] = DataEntry(k,v);
        ++currentSize;
    }

    Value Get(const Key & k)
    {
        int pos = myhash(k);
        if(arr[pos].key==k)
            return arr[pos].value;
        else
            return Value();
    }

    unsigned hash(const Key & k) const
    {
        unsigned int hashVal = 0;//����ϣֵ��Ϊ��
        const char *keyp = reinterpret_cast<const char *>(&k);//ת��Ϊ�ַ�
        for(size_t i=0; i<sizeof(Key); i++)//��ÿһ���ַ���ASC II�����
            hashVal = 37 * hashVal + keyp[i];//37*��ǰ�Ĺ�ϣֵ�ټ�����һ����ĸ
        return hashVal;
    }

    int myhash(const Key & k) const
    {
        unsigned hashVal = hash(k);
        hashVal %= arr.size();
        return hashVal;
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

#endif // HASHMAP_H
