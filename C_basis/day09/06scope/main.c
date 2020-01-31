#include <stdio.h>

//局部变量的作用域，起始于定义处，直到所在的大括号结束
//全局变量的作用域，起始于定义处，直到本文件的结束

int x = 200;
void func()
{
    int a = 20;
    printf("a = %d\n", a);
    printf("x = %d\n", x);
}

int main()
{
    int a = 10;
    printf("a = %d\n", a);
    func();
    printf("x = %d\n", x);
    return 0;
}
