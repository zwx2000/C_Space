#include <stdio.h>

//进程空间
//函数在被调用之前，其内所有的变量尚未开辟空间。
//空间的开辟起始于函数调用，空间消失结束于函数调用完毕
//传值

void func(int a);

int myMax(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int a = 10;

    func(a);

    printf("a = %d\n", a);

    return 0;
}

void func(int a)
{
    a++;
    printf("main a = %d\n", a);
}

