#include <stdio.h> //C语言中所有的函数，要求先声明再使用

int main() //main入口函数
{
    printf("Hello World!\n"); //error warning
    return 0;
}

//IDE 一般引入了一个概念，叫工程
//从源文件到可执行文件，经历了什么？
//linux   --- main.c   a.out
//windows --- main.c   xxx.exe

//gcc -E main.c -o main.i 预处理
//gcc -S main.i -o main.s 编译
//gcc -c main.s -o main.o 汇编
//gcc main.o    -o hello  链接
