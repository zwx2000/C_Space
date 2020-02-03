#include <stdio.h>

//每次从头开始，相邻两元素进行交换
//序而不排  1 2 3 4 5

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

void popSort(int *p, int n)
{
    int flag;
    for(int i=0; i<n-1; i++)
    {
        flag = 1;
        for(int j=0; j<n-1-i; j++)
        {
            if(p[j]>p[j+1])
           {
                mySwap(&p[j],&p[j+1]);
                flag = 0;
           }
        }
        if(flag)
            break;
    }
}

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,0};
    popSort(arr,10);
    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
