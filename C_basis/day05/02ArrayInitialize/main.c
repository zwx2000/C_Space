#include <stdio.h>
#include <stdlib.h>

//定义 大小 初始化 访问

#if 0
未初始化
满初始化
部分初始化，其余部分清零；初始化清零

越界初始化，禁止。c语言对于越界不检 灵活
越界访问

赋值

arr[10]  越界的元素
{1，2，3，4，5，6，7，8} 数组

两个 凡是
凡是构造类型，要么在定义的时候初始化，不可以先定义再以初始化的方法赋值
凡是基本类型，既可以在定义是初始化，也可以先定义再赋值。


#endif

int main()
{
//    int arr[10];

//    for(int i=0; i<10; ++i)
//    {
//        arr[i] = rand()%100;
//    }

//    for(int i=0; i<10; i++)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

    int arr[] = {1,2,3,4,5,6,7,11,23,34,432,56,78};

    for(int i=0; i<sizeof(arr)/sizeof(int); i++)
        printf("%d\n", arr[i]);

    return 0;
}
