#include <stdio.h>

//const ���α��� ȥ�������������
//const int *p = &a; ��ʾ���ε����ݲ����Ըı�
//int const *p = &a; ���Ըı�ָ���ָ��

//int * const p = &a ��ʾ���ε�ָ�򲻿��Ըı䣬��ָ������ݲ����Ըı�

//const int * const p = &a; ��ʾ���ε�ָ�򲻿��Ըı䣬ָ�������Ҳ���ܸı�

int main()
{
    int a = 100;
    const int * const p = &a;

//    *p = 200;
    int b = 300;
//    p = &b;

    printf("*p = %d\n", *p);
}

int main2()
{
    int a = 100;
    int * const p = &a;
    *p = 200;
    int b = 300;
//    p = &b;
    printf("%d\n",*p);
    return 0;
}


int main1()
{
    int a = 100;
//    const int *p = &a;
    int const *p = &a;

    int b = 200;
    p = &b;

//    *p = 200;
    printf("%d\n", *p);
    return 0;
}
