#include <stdio.h>

//10M
//栈空间，是用于交换数据，而不适用于大空间的申请

//栈的发展方向

//堆空间主要用于大内存的申请

void func()
{
    printf("func:\n");
    int a,b,c,d;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);
    printf("%p\n",&d);
}

void func(int n)
{
    if(n == 0)
        return ;
    else
        func(n-1);
}

int main()
{
//    char arr[1024*1024];
//    strcpy(arr,"china");

    func(100);
    printf("over");
    return 0;
}
