#include <stdio.h>

//��ʲô����£�ʹ�ô�ֵ��ַ
//ʹ���˴�ֵ�봫ַ��Ч����һ���ģ����Ǵ�ַ�����鷳

//int myMax(int i, int j)
//{
//    return i>j?i:j;
//}

//int main()
//{
//    int a = 3; int b = 5;
//    int max = myMax(a,b);
//    printf("max = %d\n", max);
//    return 0;
//}

int myMax(int *pi, int *pj)
{
    return *pi>*pj?*pi:*pj;
}

int main()
{
    int a = 3; int b = 5;
    int max = myMax(&a,&b);
    printf("max = %d\n", max);
    return 0;
}
