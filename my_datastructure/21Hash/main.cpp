#include <iostream>
#include <map> //ӳ��(Ҳ���ֵ�) ������ӳ�� ���ǹ�ϣӳ��
#include <hash_map>
#include <string>
#include "HashMap.h"

using namespace std;

int main()
{
    cout << "������(�����): " <<endl;
    map<string,int> m;//�Ƚ��ֵ� ������ӳ��
    m["Bill"] = 98;
    m["Tom"] = 67;
    m["Mary"] = 100;
    //...�������棬�����˺ܶ࣬100�����1000���

    cout << m["Tom"] << endl;

    //������ŵ�
    cout << "������ŵ�: \n";
    int arr[100000];
    for(int i=0; i<100000; i++)
        arr[i] = i%100;

    cout<<arr[8]<<endl;
    cout<<arr[18]<<endl;
    cout<<arr[98765]<<endl;

    //�ҵĹ�ϣӳ��
    cout << "�ҵĹ�ϣ(ɢ��)ӳ��" << endl;
    HashMap<string,int> myHMap;

    cout << myHMap.hash("Bill") << endl;
    cout << myHMap.myhash("Bill") << endl;
    myHMap.Put("Bill",999);
    myHMap.Put("Tom", 888);
    myHMap.Put("Mary",777);
    cout << myHMap.Get("Bill") << endl;

    cout << "ʹ��C++���õĹ�ϣӳ��" << endl;
    hash_map<string,int> hm;
    hm["Bill"] = 12;
    hm["Tom"] = 22;
    hm["Mary"] = 32;
    cout << hm["Tom"] << endl;

    return 0;
}
