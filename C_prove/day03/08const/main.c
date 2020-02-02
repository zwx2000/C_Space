#include <stdio.h>

// const constant 取代宏常量

//const 修饰的变量务必要初始化, 宏的特点是替换

#define A 100
const int AA = 100; //data ro

int main()
{
    const int mm = 100;
    int *p = &mm;//丢失类型

    *p = 300;
    printf("%d\n",mm);

    *p = &AA;
    *p = 500;
    printf("%d\n",AA);

    return 0;
}
