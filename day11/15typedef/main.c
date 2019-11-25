#include <stdio.h>

// typedef typedefine typerename

// typedef 对现有类型取别名，不能创造新类型

//使用方法
//1，先用原类型定义变量
//2，在定义前加typedef
//3,将原变量的名字，改成你需要的名字

typedef char int8;
typedef int  int16;
typedef int  ARRAY[10];

int main()
{
    printf("sizeof(ARRAY) = %d\n", sizeof(ARRAY[10]));
    return 0;
}
