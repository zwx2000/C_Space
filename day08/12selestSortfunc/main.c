#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数在结构设计 或 逻辑功能设计上的应用

void initRandArr(int *arr, int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        *arr++ = rand()%100;
    }
}

void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%2d\n", *arr++);
    }
}

int smallextIdx(int startIdx, int *arr, int n)
{
    int idx = startIdx;
    for(int i=startIdx+1; i<n; i++)
    {
        if(arr[i]>arr[idx])
            idx = i;
    }
    return idx;
}

void selectSort(int *arr, int n)
{
    int idx;
    for(int i=0; i<n-1; i++)
    {
        idx = smallextIdx(i,arr,n);
        if(idx != i)
            mySwap(&arr[i],&arr[idx]);
    }
}

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

int main()
{
    int arr[10];
    initRandArr(arr,10);
    display(arr,10);
    printf("\n=================after sort====================\n\n");
    selectSort(arr,10);
    display(arr,10);
    return 0;
}
