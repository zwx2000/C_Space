#include <stdio.h>

//���̿ռ�
//�����ڱ�����֮ǰ���������еı�����δ���ٿռ䡣
//�ռ�Ŀ�����ʼ�ں������ã��ռ���ʧ�����ں����������
//��ֵ

void func(int a);

int myMax(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int a = 10;

    func(a);

    printf("a = %d\n", a);

    return 0;
}

void func(int a)
{
    a++;
    printf("main a = %d\n", a);
}

