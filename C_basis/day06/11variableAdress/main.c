#include <stdio.h>

// &
// ����charռһ���ֽڣ�ռһ����ַ
// ���������ͣ���������ֽڣ�Ҳ����ӵ�ж����ַ�������Ƕ�һ������ȡ��ַ��ʱ��
// �õ������ĸ��ֽڵĵ�ַ����λ�ֽڵĵ�ַ

//��С�����⣬64λ������� 8���ֽ�

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
