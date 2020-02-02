#include <stdio.h>
#include <stdlib.h>

//泛型编程

int myCompare(const void * pa, const void * pb)
{
//    if(*(int*)pa < *(int*)pb)
//        return 1;
//    else
//        return -1;

    return *(int*)pa - *(int*)pb;
}

int main(void)
{
    int arr[10] = {6,5,4,3,2,1,7,8,9,0};
    qsort(arr,10,4,myCompare);//回调函数
    for(int i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
