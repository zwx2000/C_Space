#include <stdio.h>

// typedef typedefine typerename

// typedef ����������ȡ���������ܴ���������

//ʹ�÷���
//1������ԭ���Ͷ������
//2���ڶ���ǰ��typedef
//3,��ԭ���������֣��ĳ�����Ҫ������

typedef char int8;
typedef int  int16;
typedef int  ARRAY[10];

int main()
{
    printf("sizeof(ARRAY) = %d\n", sizeof(ARRAY[10]));
    return 0;
}
