#include <stdio.h>

typedef struct _structTest
{
    char a;
    short b;
    int c;
}MyStruct;

typedef union _unionTest
{
    char a;
    short b;
    int c;
}MyUnion;

//��С
//���ڽṹ����ԣ�����������ڴ���룬���С����������Ԫ�ش�С֮��
//���ڹ�������ԣ����С���������Ԫ����ռ�õĿռ�Ĵ�С

//��Ա��ַ
//���ڽṹ����ԣ�ÿһ����Ա�����Լ������ĵ�ַ
//���ڹ�������ԣ����еĳ�Ա������һ����ַ

int main()
{
    MyStruct ms;
    MyUnion  mu;

    printf("sizeof(MyStruct) = %d\n",sizeof(MyStruct));
    printf("sizeof(MyUnion) = %d\n", sizeof(MyUnion));
    return 0;
}
