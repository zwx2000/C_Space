#include <stdio.h>

//��ʲô����£�ʹ�ô�ֵ��ַ
//ʹ���˴�ֵ�봫ַ��Ч����һ���ģ����Ǵ�ַ�����鷳
//��ֵ�ķ�ʽ�Ѿ��򲻵�Ҫ���ˣ����ʱ��Ҫ��ַ

//���ݿռ�     �����ݿռ�
//������ǵ���Ҫ���ı䴫�ݿռ�����ݣ���ʱ�ô�ֵ
//�������ϣ��ͨ�������ݿռ�ı䴫�ݿռ�����ݣ���ʱ�ش�ַ
//��Ȼ�����ı䴫�ݿռ�����ݣ�Ҳ���Դ�ַ

//void mySwap(int i, int j)
//{
//    int t = i;
//    i = j;
//    j = t;
//}

//int main()
//{
//    int a = 3; int b = 5;
//    mySwap(a,b);
//    printf("a = %d  b = %d\n", a, b);
//    return 0;
//}

void mySwap(int *pi, int *pj)
{
    int t = *pi;
    *pi = *pj;
    *pj = t;
}

int main()
{
    int a = 3; int b = 5;
    mySwap(&a,&b);
    printf("a = %d  b = %d\n", a, b);
    return 0;
}
