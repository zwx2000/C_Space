#include <stdio.h>

//�����������붨�壬����Ҫ������
//extern ����ʡ�ԣ���������ʡ
//int a = 100; ==> ����
//int a ==> ��ȷ��

//extern int a;

extern int mm;

int main()
{
    printf("mm = %d\n", mm);
    return 0;
}

int mm = 300;
