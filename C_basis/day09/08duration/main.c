#include <stdio.h>

//函数的生命周期，起于调用，结束于调用结束
//局部变量的生命周期，起于调用，结束于调用结束

//main开始 == 程序的开始   main函数的结束 == 程序的结束

//全局变量的生命周期，起于main调用，结束于main调用结束 程序的生命周期

void func()
{
    int a;
}

int main()
{
    int a;
    func();
    return 0;
}
