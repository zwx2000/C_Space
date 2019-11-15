#include <stdio.h>

//指针常量 -> 指针变量
//对变量取地址，取出的地址，就是一个指针，且常量指针
//常量指针不是一个单纯的地址，而是有类型的
//指针的本质，是一个有类型的地址。类型决定了从这个地址开始的寻址能力

// &  * reference  derefer  取地址 取内容


int main()
{
    char a = 1; short b = 2; int c = 10; double d = 123.45;

    printf("&a = %p  ", &a); printf("%#x\n", &a);
    printf("&b = %p  ", &b); printf("%#x\n", &b);
    printf("&c = %p  ", &c); printf("%#x\n", &c);
    printf("&d = %p  ", &d); printf("%#x\n", &d);

    printf("%d\n", *(&a));
    printf("%d\n", *(&b));
    printf("%d\n", *(&c));
    printf("%f\n", *(&d));

    printf("%d\n", *((char*)0x61fe1f));
    printf("%d\n", *((short*)0x61fe1c));
    printf("%d\n", *((int*)0x61fe18));
    printf("%f\n", *((double*)0x61fe10));

    return 0;





}
