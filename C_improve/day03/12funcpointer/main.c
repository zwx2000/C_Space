#include <stdio.h>

//void (*p)(void) �������͵Ļ�����ʽ

void print()
{
    printf("abc\n");
    printf("abc\n");
    printf("abc\n");
    printf("abc\n");
    return;
}

//�������ı��ʣ�������һ�ο�ִ�д�����׵�ַ

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
