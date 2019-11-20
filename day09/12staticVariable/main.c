#include <stdio.h>

//全局变量会带来命名污染，全局可用，避免传参
//一个全局变量，天然的拥有外延性，可以被其他的文件所引用，extern
//static 修饰全局变量以后，外延性消失，变成本文件内部的全局变量

//也适用于函数

static int mm = 10;

int main()
{
    printf("Hello World!\n");
    return 0;
}
