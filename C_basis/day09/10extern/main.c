#include <stdio.h>

//变量的声明与定义，现在要区分了
//extern 可以省略，但不建议省
//int a = 100; ==> 定义
//int a ==> 不确定

//extern int a;

extern int mm;

int main()
{
    printf("mm = %d\n", mm);
    return 0;
}

int mm = 300;
