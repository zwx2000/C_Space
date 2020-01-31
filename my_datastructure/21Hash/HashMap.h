#ifndef HASHMAP_H
#define HASHMAP_H

#include <vector>

template <class Key, class Value>
class HashMap //哈希映射
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
        unsigned int hashVal = 0;//将哈希值设为零
        const char *keyp = reinterpret_cast<const char *>(&k);//转型为字符
        for(size_t i=0; i<sizeof(Key); i++)//对每一个字符用ASC II码计算
            hashVal = 37 * hashVal + keyp[i];//37*当前的哈希值再加上下一个字母
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
