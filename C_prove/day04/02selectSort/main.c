#include <stdio.h>

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

// 优化方法 比而不换 只记下标
void selectSort(int *p, int n)
{
    int idx;
    for(int i=0; i<n-1; i++)
    {
        idx = i;
        for(int j = i+1; j<n; j++)
        {
            if(p[idx]<p[j])
            {
                idx = j;
            }
        }
        if(idx != i)
            mySwap(&p[idx],&p[i]);
    }
}

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,0};

    selectSort(arr,10);

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
