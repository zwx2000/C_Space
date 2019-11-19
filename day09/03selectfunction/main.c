#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//t��ֵ���ڲ��ϸı��
int maxArr(int *p, int n)
{
    int t = p[0];
    for(int i=0; i<n; i++)
    {
        if(p[i]>t)
            t = p[i];
    }
    return t;
}

//idx��ֵ���ڲ��ϸı��
int getSmallIdx(int i, int *pa, int n)
{
    int idx = i;
    for(int j=i+1; j<n; j++)
    {
        if(pa[j]<pa[idx])
            idx = j;
    }
    return idx;
}

//ѡ������
void selectSort(int *pa, int n)
{
    int idx;
    for(int i=0; i<n-1; i++)
    {
        idx = getSmallIdx(i,pa,n);
        if(idx != i)
        {
            mySwap(&pa[idx], &pa[i]);
        }
    }
}

int main()
{
    int arr[10];
    initRandArr(arr,10);
    disArr(arr,10);
    selectSort(arr,10);
    disArr(arr,10);
    return 0;
}
