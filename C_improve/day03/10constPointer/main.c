#include <stdio.h>

//const 修饰变量 去掉类型则见本质
//const int *p = &a; 表示修饰的内容不可以改变
//int const *p = &a; 可以改变指针的指向

//int * const p = &a 表示修饰的指向不可以改变，但指向的内容不可以改变

//const int * const p = &a; 表示修饰的指向不可以改变，指向的内容也不能改变

int main()
{
    int a = 100;
    const int * const p = &a;

//    *p = 200;
    int b = 300;
//    p = &b;

    printf("*p = %d\n", *p);
}

int main2()
{
    int a = 100;
    int * const p = &a;
    *p = 200;
    int b = 300;
//    p = &b;
    printf("%d\n",*p);
    return 0;
}


int main1()
{
    int a = 100;
//    const int *p = &a;
    int const *p = &a;

    int b = 200;
    p = &b;

//    *p = 200;
    printf("%d\n", *p);
    return 0;
}
