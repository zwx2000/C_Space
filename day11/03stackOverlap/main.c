#include <stdio.h>

//10M
//ջ�ռ䣬�����ڽ������ݣ����������ڴ�ռ������

//ջ�ķ�չ����

//�ѿռ���Ҫ���ڴ��ڴ������

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
