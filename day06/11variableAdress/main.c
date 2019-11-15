#include <stdio.h>

// &
// 除了char占一个字节，占一个地址
// 其他的类型，包含多个字节，也就是拥有多个地址，当我们对一个变量取地址的时候
// 拿到的是哪个字节的地址？低位字节的地址

//大小的问题，64位机的情况 8个字节

int main()
{
    char a; short b; int c; double d;

    printf("&a = %p\n", &a); printf("%#x\n", &a);
    printf("&b = %p\n", &b); printf("%#x\n", &b);
    printf("&c = %p\n", &c); printf("%#x\n", &c);
    printf("&d = %p\n", &d); printf("%#x\n", &d);

    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));

    return 0;
}
