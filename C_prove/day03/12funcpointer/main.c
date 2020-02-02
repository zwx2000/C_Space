#include <stdio.h>

//void (*p)(void) 函数类型的基本格式

void print()
{
    printf("abc\n");
    printf("abc\n");
    printf("abc\n");
    printf("abc\n");
    return;
}

//函数名的本质，代表了一段可执行代码的首地址

int main()
{
    int a = 100;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%d\n",*((int*)0x0061FECC));

    print();
    printf("%p\n",print);
    ((void (*)(void))0x004015C0)();

    void (*p)(void) = print;
    p();

//    void (*p)(void) = &print;
//    (*p)();

    typedef void (*PF)(void);

    PF pf = print;
    pf();

    return 0;
}
