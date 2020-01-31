#include <stdio.h>

// return 退出当前函数

void func()
{
    printf("Hello World!\n");

    printf("Hello World!\n");
    printf("Hello World!\n");
    return 0;
    printf("Hello World!\n");
    printf("Hello World!\n");
}

int main()
{
    func();
    printf("Hello World!\n");

    return 0;
}
