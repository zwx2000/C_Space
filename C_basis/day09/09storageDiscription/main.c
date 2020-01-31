#include <stdio.h>

//auto 只能用于修饰局部变量，表示该变量存储于栈上
//存储于栈上的数：随用随开，用完消失
//默认的局部变量就是auto类型的，所以通常将其省略
//将其忘记

//register 存储于cpu的一个变量，速度很快，但数量有限，通常被优化
//频繁使用的变量 一般不用
//将其忘记



int main()
{
    register int a = 5;
    register int b = 6;
    register int c = 7;
    register int d = 8;
    register int e = 9;
    register int f = 10;
//    auto int a;
    return 0;
}
