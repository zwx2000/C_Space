#include <stdio.h>

//作用于叠加，指的是全局变量同局部变量的作用域叠加
//在不同的作用域。可以有重名的标识符
//局部变量会覆盖全局变量的作用域
//更小的作用域，只能用于再次划分局部作用域
//func()
//{}

int a = 100;

int main()
{
    int a = 10;
    printf("a = %d\n", a);
    return 0;
}
