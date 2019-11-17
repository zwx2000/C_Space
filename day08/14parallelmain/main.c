#include <stdio.h>

//嵌套调用，多了会挂掉，栈溢出


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
