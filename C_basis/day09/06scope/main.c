#include <stdio.h>

//�ֲ���������������ʼ�ڶ��崦��ֱ�����ڵĴ����Ž���
//ȫ�ֱ�������������ʼ�ڶ��崦��ֱ�����ļ��Ľ���

int x = 200;
void func()
{
    int a = 20;
    printf("a = %d\n", a);
    printf("x = %d\n", x);
}

int main()
{
    int a = 10;
    printf("a = %d\n", a);
    func();
    printf("x = %d\n", x);
    return 0;
}
