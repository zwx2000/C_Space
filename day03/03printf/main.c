#include <stdio.h>

//printf �����������࣬ ���Ƹ�ʽ���Ǹ�ʽ�����ַ�
//��ʽ����Ҫ��������һһ��Ӧ�ģ������ķǸ�ʽ�ַ�ԭ��������Ǹ�ʽ�ַ�����ʾ����ʾ
int main()
{
    int a = 3;
    printf("Hello World!\n");

    printf("%d\n", a);

    int data = 0x55;
    printf("%#x--%#o--%#d\n", data, data, data);
    printf("%o\n", data);
    printf("%d\n", data);

    float f = 1234.567;

    printf("%f\n", f);
    printf("%g\n", f);
    printf("%e\n", f);

    //��ʵ�ʿ�ȴ��������ʵ�����
    printf("12345678910\n");
    printf("%10d\n", 10);
    printf("%10f\n", 10.01);

    printf("%015d\n", 123456);

    char ch = -1;


    return 0;
}
