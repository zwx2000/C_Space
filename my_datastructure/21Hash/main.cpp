#include <iostream>
#include <map> //映射(也叫字典) 二叉树映射 不是哈希映射
#include <hash_map>
#include <string>
#include "HashMap.h"

using namespace std;

int main()
{
    cout << "二叉树(红黑树): " <<endl;
    map<string,int> m;//比较字典 二叉树映射
    m["Bill"] = 98;
    m["Tom"] = 67;
    m["Mary"] = 100;
    //...继续保存，保存了很多，100万个，1000万个

    cout << m["Tom"] << endl;

    //数组的优点
    cout << "数组的优点: \n";
    int arr[100000];
    for(int i=0; i<100000; i++)
        arr[i] = i%100;

    cout<<arr[8]<<endl;
    cout<<arr[18]<<endl;
    cout<<arr[98765]<<endl;

    //我的哈希映射
    cout << "我的哈希(散列)映射" << endl;
    HashMap<string,int> myHMap;

    cout << myHMap.hash("Bill") << endl;
    cout << myHMap.myhash("Bill") << endl;
    myHMap.Put("Bill",999);
    myHMap.Put("Tom", 888);
    myHMap.Put("Mary",777);
    cout << myHMap.Get("Bill") << endl;

    cout << "使用C++做好的哈希映射" << endl;
    hash_map<string,int> hm;
    hm["Bill"] = 12;
    hm["Tom"] = 22;
    hm["Mary"] = 32;
    cout << hm["Tom"] << endl;

    return 0;
}
