#include <stdio.h>

//数组的传递不可能通过拷贝的方式来传递
//C语言基于效率的原因，在传递的时候，数组名仅充当地址使用
//数组有三要素，起始地址，步长（刻度），范围
//数组名，是一个指针，包含了起始地址，步长（刻度） 但数组名里面没有包含范围
//所以在传递一维数组的时候，要传递数组名和范围

//void disArray(int arr[10])
//{
//    printf("dissizeof(arr) = %d\n", sizeof(arr));
//}

//disArray(arr);
//disArray()

void disArray(int *p, int n)
{
    printf("disArray sizeof(arr) = %d\n", sizeof(p));

    for(int i=0; i<n; i++)
    {
        printf("%d\n", *p++);
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7};
    printf("sizeof(arr) = %d\n", sizeof(arr));

//    for(int i=0; i<10; i++)
//    {
//        printf("%d\n", arr[i]);
//    }

    //*arr == arr[0]
    disArray(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}
