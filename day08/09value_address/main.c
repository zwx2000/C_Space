#include <stdio.h>

//通过传值的方式，达不到修改变量a的内容的目的

void func(int* pa);

int main()
{
    int a = 10;
    func(&a);
    printf("main a = %d     &a = %#x\n",a, &a);

    return 0;
}

void func(int* pa)
{
    (*pa)++;
    //printf("func a = %d\n",*pa);
}
