//ѡ������
//ð������ĸĽ��� ÿ��ɨ��ѡ��С��
//���ٽ�������

#include <iostream>

using namespace std;

void SelectSort(int list[], const int n);

int main()
{
    int x[] = {1,3,5,7,9,0,2,4,6,8};
    SelectSort(x,10);

    for(int i=0; i<10; i++)
        cout << x[i] <<endl;

    return 0;
}

void SelectSort(int list[], const int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(list[j]<list[min])
                min = j;
        }
        swap(list[i],list[min]);
    }
}
