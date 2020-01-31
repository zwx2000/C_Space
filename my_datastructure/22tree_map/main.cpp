#include <iostream>
#include <map> //映射(也叫字典) 二叉树映射 不是哈希映射
#include <string>
#include "LinerMap.h"

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

    //一个没用的，只供学习的线性映射
    cout << "线性映射: " << endl;
    LinerMap<string,int> lm;
    lm.Put("Bill",99);
    lm.Put("Tom",88);
    //继续Put很多个数据
    cout << "LinerMap: " << lm.Get("Tom") << endl;


    return 0;
}
