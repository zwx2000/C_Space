#include <stdio.h>

//�ַ���������˫���� �����һ���ַ�
//ϵͳ���ַ�����������һ��'\0'

//C���ԣ�����δ������ַ�����
//���䴦��Ϊһ��ָ��data�ַ������׵�ַ
//�Ա����� ��Ҫ�أ���ʼ��ַ����������Χ
//char* �ܲ��ܴ����������ַ�������ʼ��ַ��������'\0'
#if 0
stack

heap
data ��ȫ�ֱ��� static �ֲ����� ������
text
#endif


int main()
{
    printf("sizeof(\"china\") = %d\n", sizeof("china"));

    printf("%s", "china");

    char *p = "china"; //���ܴ���ĳ�ֵȼ۹�ϵ

    printf("p = %p p+1 = %p p[0] = %c 0[p] = %c\n", p, p+1, p[0], 2[p]);

    printf("  = %p  +1 = %p      = %c 0[p] = %c\n", "china", "china"+1, "china"[0], 2["china"]);

    return 0;
}
