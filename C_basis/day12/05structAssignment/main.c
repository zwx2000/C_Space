#include <stdio.h>

//��ͬ���͵Ľṹ��֮����Ը�ֵ
//���﷨�����춨�˿������ڴ��κͷ�ֵ

typedef struct stu
{
    char name[100];
    int num;
    char sex;
    float score;
}Stu;

int main()
{
    Stu s; Stu s2 = {"wangwu",1001,'f',89};
    s = s2;

    return 0;
}
