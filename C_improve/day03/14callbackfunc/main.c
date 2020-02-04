#include <stdio.h>

#include "mysort.h"

int myCompare(int a, int b)
{
    return a<b?1:0;
}

int main(void)
{
    int arr[10] = {6,5,4,3,2,1,7,8,9,0};
    selectSort(arr,10,myCompare);//»Øµ÷º¯Êý
    for(int i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
