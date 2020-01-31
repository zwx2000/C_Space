#include <stdio.h>

//构造类型
//声明/定义 大小 初始化 访问
//存储 三要素
//variable-length array  linux

//数据形态
//求和与平均值
//求最值 大 小 假设某一个成员（第一个成员为最值），然后依次比较
//求次最值(一重循环解决)

//排序
int main()
{
    int maxValue;
    int minValue;
    int arr[10] = {4,6,8,2,0,1,3,5,7,9};

    maxValue = arr[0];
    minValue = arr[0];

    for(int i=0; i<10; i++)
    {
        if(arr[i]>maxValue)
            maxValue = arr[i];
        if(arr[i]<minValue)
            minValue = arr[i];
    }
    printf("max Value = %d\n", maxValue);
    printf("min Value = %d\n", minValue);

    return 0;
}

int main1()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int sum;
    for(int i=0; i<10; i++)
        sum += arr[i];
    printf("sum = %d\n", sum);

    printf("average = %f\n", (float)sum/10);

    return 0;
}
