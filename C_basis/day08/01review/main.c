#include <stdio.h>

//C++��ȫ����C���� ��ָ�븳ֵ��Ҫ������ʾ

//��������
//pp + 1 == pp +sizeof(int)
//��ϵ����

int main()
{
    int *p;
    char *q;
    p = (int*)q;

    int *pp = 0x0001;
    pp+1;
    int *qq = 0x0005;

    if(pp+1 == qq)
        printf("==\n");
    if(pp-qq == 1)
        printf("==\n");
    return 0;
}
