#include <stdio.h>

//�ṹ��֧�ָ�ֵ

typedef struct _stu
{
    char name[30];
}Stu;

int main()
{
    Stu stu1 = {"china"};
    Stu stu2;
    stu2 = stu1;
    return 0;
}
