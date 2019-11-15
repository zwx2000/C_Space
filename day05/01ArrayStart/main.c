#include <stdio.h>

//相同的数据类型进行构造，就成了数组
//不同的数据类型进行构造，就成了结构体

//对构造类型来说，我们研究的套路是
//定义 大小 初始化 访问
//int  10

int main()
{
//    int a = 100;
//    a = 30;
//    int a[10];
//    a[10] = {1,2,3,4,}；

    int arr[10];  // a[0]--a[9]

    printf("sizeof(arr) = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));

    struct
    {
        char a; int b; float c;
        double d; double e; long f;
        long long ll;
    }structVar;

    printf("%d\n", sizeof(struct{char a; int b; float c;double d; double e; long f;long long 11}));

    return 0;
}
