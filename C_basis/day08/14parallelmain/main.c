#include <stdio.h>

//Ƕ�׵��ã����˻�ҵ���ջ���


void foo();

void func()
{
    printf("func()\n");
}

void foo()
{
    printf("foo()\n");
    func();
}

int main()
{
    func();
    return 0;
}
