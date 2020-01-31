#include <iostream>
#include <map> //ӳ��(Ҳ���ֵ�) ������ӳ�� ���ǹ�ϣӳ��
#include <string>
#include "LinerMap.h"

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

    //һ��û�õģ�ֻ��ѧϰ������ӳ��
    cout << "����ӳ��: " << endl;
    LinerMap<string,int> lm;
    lm.Put("Bill",99);
    lm.Put("Tom",88);
    //����Put�ܶ������
    cout << "LinerMap: " << lm.Get("Tom") << endl;


    return 0;
}
