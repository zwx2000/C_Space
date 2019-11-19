#include <stdio.h>

//凡是在{}以内的变量称为局部变量，也包含形式参数
//凡是在{}以外的变量称为全局变量

//作用域这个概念
//{}以内的作用域，称为局部作用域
//{}以外的作用域，称为全部作用域
//同一作用域内，不可以用重名的变量

int i = 5;
int j = 6;

void func()
{
    int a;
    int b;
}

int main()
{
    int a;
    int b;
    printf("Hello World!\n");
    return 0;
}
