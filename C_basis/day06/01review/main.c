#include <stdio.h>

#if 0
//语法
//声明或定义 大小 初始化 访问
//存储 三要素

//数组名有二义性

//数据形态
//和/最值
//排序及优化
//查找
#endif

int main()
{
    int arr[10];

    printf("sizeof(arr) == sizeof(int[10])\n");
    printf("sizeof(arr) == %d\n", sizeof(arr));
    printf("sizeof(arr) == %d\n", sizeof(int[10]));

    for(int i=0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
