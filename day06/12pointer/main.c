#include <stdio.h>

//ָ�볣�� -> ָ�����
//�Ա���ȡ��ַ��ȡ���ĵ�ַ������һ��ָ�룬�ҳ���ָ��
//����ָ�벻��һ�������ĵ�ַ�����������͵�
//ָ��ı��ʣ���һ�������͵ĵ�ַ�����;����˴������ַ��ʼ��Ѱַ����

// &  * reference  derefer  ȡ��ַ ȡ����


int main()
{
    char a = 1; short b = 2; int c = 10; double d = 123.45;

    printf("&a = %p  ", &a); printf("%#x\n", &a);
    printf("&b = %p  ", &b); printf("%#x\n", &b);
    printf("&c = %p  ", &c); printf("%#x\n", &c);
    printf("&d = %p  ", &d); printf("%#x\n", &d);

    printf("%d\n", *(&a));
    printf("%d\n", *(&b));
    printf("%d\n", *(&c));
    printf("%f\n", *(&d));

    printf("%d\n", *((char*)0x61fe1f));
    printf("%d\n", *((short*)0x61fe1c));
    printf("%d\n", *((int*)0x61fe18));
    printf("%f\n", *((double*)0x61fe10));

    return 0;





}
