#include <stdio.h>

//��ַ���ڲ�ͬ����������˵�ǿ��ŵ�

//void mySwap(int a, int b)
//{
//    int t = a;
//    a = b;
//    b = t;
//}

void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main()
{
    int a=3, b=5;
    printf("a = %d b = %d\n", a, b);
    mySwap(&a,&b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}


