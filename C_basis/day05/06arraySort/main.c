#include <stdio.h>
#include <stdlib.h>

//���� �ǲ��� ������ǰ��

//ѡ���������  ���ٽ�������������� �Ƚϲ�����
#define N 30

int main()
{
    int arr[N];
    for(int i=0; i<N; i++)
    {
        arr[i] = rand()%100;
    }

    int idx;
    for(int i=0; i<N-1; i++)
    {
        int idx = i;
        for(int j=i+1; j<N; j++)
        {
            if(arr[idx]>arr[j])
            {
                idx = j;
            }
        }
        if(idx != i)
        {
            arr[idx] ^= arr[i];
            arr[i] ^= arr[idx];
            arr[idx] ^= arr[i];
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

//ѡ������
int main1()
{
    int arr[N] = {4,6,8,2,0,1,3,5,7,9};
    int t;
    for(int i=0; i<N-1; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(arr[i]>arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
